/*
 * XREFs of KeWriteProtectPAT @ 0x1403B16D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
 */

void __fastcall KeWriteProtectPAT(char a1)
{
  bool v1; // zf
  unsigned __int64 *v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v7 = __readmsr(0x277u);
  v1 = a1 == 0;
  v2 = &v7;
  v3 = 8LL;
  _R8D = 1;
  if ( v1 )
  {
    do
    {
      if ( *(_BYTE *)v2 == 5 )
        *(_BYTE *)v2 = 6;
      v2 = (unsigned __int64 *)((char *)v2 + 1);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    do
    {
      if ( *(_BYTE *)v2 == 6 )
        *(_BYTE *)v2 = 5;
      v2 = (unsigned __int64 *)((char *)v2 + 1);
      --v3;
    }
    while ( v3 );
  }
  __writemsr(0x277u, v7);
  if ( KiFlushPcid )
  {
    v8 = 2uLL;
    __asm { invpcid r8d, [rsp+48h+var_20] }
    if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
      KiSetUserTbFlushPending();
  }
  else
  {
    v5 = __readcr4();
    if ( (v5 & 0x20080) != 0 )
    {
      __writecr4(v5 ^ 0x80);
      __writecr4(v5);
    }
    else
    {
      v6 = __readcr3();
      __writecr3(v6);
    }
  }
}
