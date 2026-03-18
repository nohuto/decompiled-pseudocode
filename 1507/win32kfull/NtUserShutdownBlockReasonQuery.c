/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C0131000
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  char *Prop; // r15
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax

  EnterSharedCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87);
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
      v13 = v8;
      ProbeForWrite(a2, 2 * v8, 2u);
      RtlStringCchCopyW((char *)a2, v13, Prop);
    }
    v7 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v7 = (unsigned int *)W32UserProbeAddress;
    *v7 = *v7;
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)&Prop[2 * v14] );
    *a3 = v14 + 1;
    v9 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
