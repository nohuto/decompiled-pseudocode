/*
 * XREFs of AcpiReflectNativeObject @ 0x1C0053B20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIPauseInterpreter @ 0x1C005979C (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0059888 (AMLIResumeInterpreter.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 */

__int64 __fastcall AcpiReflectNativeObject(__int64 a1)
{
  char v1; // r12
  char v2; // r13
  int v3; // ebx
  unsigned int i; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  int v8; // eax
  int v9; // r9d
  bool v10; // cf
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[5]; // [rsp+48h] [rbp-28h] BYREF
  char v14; // [rsp+B0h] [rbp+40h] BYREF
  char v15; // [rsp+B8h] [rbp+48h]
  __int64 v16; // [rsp+C0h] [rbp+50h]

  v16 = *(_QWORD *)(a1 + 16);
  v1 = 0;
  v15 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v6 = 0;
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_16;
    v7 = v16;
    do
    {
      v8 = *(_DWORD *)(a1 + 40LL * v6 + 48);
      if ( i )
      {
        if ( (v8 & 1) == 0 )
          goto LABEL_14;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 40LL * v6 + 44) <= 1u )
      {
        *(_DWORD *)(a1 + 40LL * v6 + 64) = -1073741823;
        if ( (v8 & 1) != 0 )
        {
          v2 = 1;
          goto LABEL_14;
        }
LABEL_10:
        v9 = *(_DWORD *)(a1 + 40LL * v6 + 52);
        v10 = *(_DWORD *)(a1 + 40LL * v6 + 44) != 0;
        v14 = 0;
        v3 = AMLICreateNativeNamespaceObject(
               v10 ? 6 : 8,
               *(_DWORD *)(a1 + 40LL * v6 + 40),
               v7,
               v9,
               *(_DWORD *)(a1 + 40LL * v6 + 56),
               (__int64)&v14);
        if ( v3 < 0 && v14 )
          v3 = 0;
        goto LABEL_13;
      }
      v3 = -1073741637;
LABEL_13:
      *(_DWORD *)(a1 + 40LL * v6 + 64) = v3;
LABEL_14:
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 24) );
    v1 = v15;
LABEL_16:
    if ( !v2 || i == 1 )
      break;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13[2] = AcpiInterpreterPausedSignalEventCallback;
    v13[3] = &Event;
    v13[1] = v13;
    v13[0] = v13;
    v3 = AMLIPauseInterpreter(v13);
    if ( v3 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v3 < 0 )
      break;
    v1 = 1;
    v15 = 1;
  }
  if ( v1 )
    AMLIResumeInterpreter();
  return (unsigned int)v3;
}
