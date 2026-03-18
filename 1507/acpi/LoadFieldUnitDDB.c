/*
 * XREFs of LoadFieldUnitDDB @ 0x1C0045ACC
 * Callers:
 *     Load @ 0x1C0005E10 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C000623C (LoadDDB.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall LoadFieldUnitDDB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int Object; // eax
  unsigned int DDB; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // r14
  const void *v14; // rdx
  int v15; // ecx
  _QWORD v17[5]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v18[2]; // [rsp+58h] [rbp-1h] BYREF
  int v19; // [rsp+78h] [rbp+1Fh]

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[3]) = 36;
  WORD1(v17[0]) = 3;
  v17[4] = v18;
  Object = ReadObject(a1, a2, (__int64)v17);
  DDB = Object;
  if ( !Object )
  {
    v8 = HeapAlloc(gpheapGlobal, 1179992648, DWORD1(v18[0]));
    v9 = v8;
    if ( !v8 )
    {
      DDB = -1073741670;
      LogError(-1073741670);
      v10 = 82;
LABEL_15:
      PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      return DDB;
    }
    *(_OWORD *)v8 = v18[0];
    *(_OWORD *)(v8 + 16) = v18[1];
    *(_DWORD *)(v8 + 32) = v19;
    LODWORD(v17[3]) = DWORD1(v18[0]) - 36;
    v17[4] = v8 + 36;
    v11 = ReadObject(a1, a2, (__int64)v17);
    DDB = v11;
    if ( v11 )
    {
      if ( v11 == 32772 )
      {
        DDB = -1072431098;
        LogError(-1072431098);
        v14 = 0LL;
        v15 = 83;
        goto LABEL_11;
      }
    }
    else
    {
      if ( ghValidateTable )
      {
        v12 = ghValidateTable(v9, qword_1C005ABD0);
        v13 = (const void *)v12;
        if ( v12 )
        {
          DDB = -1072431079;
          LogError(-1072431079);
          v14 = v13;
          v15 = 84;
LABEL_11:
          PrintDebugMessage(v15, v14, 0LL, 0LL, 0LL);
          goto LABEL_12;
        }
      }
      DDB = LoadDDB(a1, v9, *(_QWORD *)(a1 + 80), a3);
    }
LABEL_12:
    HeapFree(v9);
    return DDB;
  }
  if ( Object == 32772 )
  {
    DDB = -1072431098;
    LogError(-1072431098);
    v10 = 83;
    goto LABEL_15;
  }
  return DDB;
}
