/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C01233C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  char *Prop; // r15
  unsigned int *v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL);
      goto LABEL_4;
    }
    v12 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v12 = (unsigned int *)W32UserProbeAddress;
    v8 = *v12;
    if ( (unsigned int)v8 > 0x101 )
      v8 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v8 )
        goto LABEL_3;
      v14 = v8;
      ProbeForWrite(a2, 2 * v8, 2u);
      RtlStringCchCopyW((char *)a2, v14, Prop);
    }
    v7 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v7 = (unsigned int *)W32UserProbeAddress;
    *v7 = *v7;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&Prop[2 * v13] );
    *a3 = v13 + 1;
    v9 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
