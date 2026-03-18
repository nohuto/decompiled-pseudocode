/*
 * XREFs of AMLIRegEventHandler @ 0x1C0004604
 * Callers:
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C38C (UnRegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C0084000 (OSInitializeCallbacks.c)
 * Callees:
 *     RegEventHandler @ 0x1C00047EC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C000480C (RegRSAccess.c)
 *     Simulator_Post_Generic @ 0x1C0042F70 (Simulator_Post_Generic.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C0043194 (Simulator_Pre_RegEventHandler.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     RegOpcodeHandler @ 0x1C00455E0 (RegOpcodeHandler.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // r9
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v2 = v15;
  v12[0] = 0LL;
  v3 = v15;
  dword_1C005A218 = 0;
  v4 = v13;
  byte_1C005A21C = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v12);
    if ( (_DWORD)result )
      return result;
    v3 = v15;
    v4 = v13;
  }
  if ( a1 <= 0xB )
  {
    if ( a1 == 11 )
    {
      v7 = &ghDestroyObj;
      goto LABEL_10;
    }
    if ( a1 > 6 )
    {
      if ( a1 != 7 )
      {
        if ( a1 == 8 )
        {
          v7 = &qword_1C005A1F8;
        }
        else if ( a1 == 9 )
        {
          v7 = &qword_1C005A208;
        }
        else
        {
          v7 = &ghCreate;
        }
        goto LABEL_10;
      }
      LOBYTE(v2) = 1;
    }
    else
    {
      if ( a1 != 6 )
      {
        if ( a1 != 1 )
        {
          switch ( a1 )
          {
            case 2u:
              v7 = &ghNotify;
              goto LABEL_10;
            case 3u:
              v7 = &ghFatal;
LABEL_10:
              v8 = RegEventHandler(v7, v4, v3);
              goto LABEL_11;
            case 4u:
              v7 = &ghValidateTable;
              goto LABEL_10;
            case 5u:
              v7 = &ghGlobalLock;
              goto LABEL_10;
          }
          goto LABEL_52;
        }
        v11 = 0LL;
        goto LABEL_54;
      }
      v2 = 0LL;
    }
    v8 = RegRSAccess(a2, v4, v3, v2);
    goto LABEL_11;
  }
  switch ( a1 )
  {
    case 0xCu:
      v11 = 0x80000000LL;
LABEL_54:
      v8 = RegOpcodeHandler(a2, v4, v3, v11);
LABEL_11:
      v9 = v8;
      if ( v8 == 32772 )
        v9 = 259;
      goto LABEL_13;
    case 0xDu:
      v7 = &ghMapTable;
      goto LABEL_10;
    case 0xEu:
      v7 = &ghGetAcpiTableVersion;
      goto LABEL_10;
    case 0xFu:
      v7 = &ghCheckOsiString;
      goto LABEL_10;
    case 0x10u:
      v7 = &ghMutexObject;
      goto LABEL_10;
    case 0x11u:
      v7 = &ghQueryDLMSupportHandler;
      goto LABEL_10;
    case 0x12u:
      v7 = &ghLoadTable;
      goto LABEL_10;
    case 0x13u:
      v7 = &ghUnloadTable;
      goto LABEL_10;
    case 0x14u:
      v7 = &ghNativeMethodEvalObject;
      goto LABEL_10;
  }
LABEL_52:
  v9 = -1072431091;
  LogError(3222536205LL);
  PrintDebugMessage(164, a1, 0, 0, 0LL);
LABEL_13:
  if ( g_SimulatorCallbackObject )
    return (unsigned int)Simulator_Post_Generic(v12, v9);
  return v9;
}
