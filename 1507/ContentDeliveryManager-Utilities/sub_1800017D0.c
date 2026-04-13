/*
 * XREFs of sub_1800017D0 @ 0x1800017D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     memset @ 0x18002654C (memset.c)
 */

void *sub_1800017D0()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  CHAR *i; // rdx
  _BYTE *v3; // rcx
  signed __int64 v4; // rdx
  char v5; // al
  HMODULE phModule; // [rsp+20h] [rbp-138h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-128h] BYREF

  if ( !byte_18003AC64 )
  {
    v0 = 64LL;
    memset(&unk_18003AB80, 0, 0x40uLL);
    phModule = 0LL;
    if ( GetModuleHandleExW(6u, (LPCWSTR)sub_1800017B0, &phModule) && GetModuleFileNameA(phModule, Filename, 0x104u) )
    {
      v1 = -1LL;
      do
        ++v1;
      while ( Filename[v1] );
      for ( i = &Filename[v1]; i > Filename && *(i - 1) != 92; --i )
        ;
      v3 = &unk_18003AB80;
      v4 = i - (CHAR *)&unk_18003AB80;
      do
      {
        if ( v0 == -2147483582 )
          break;
        v5 = v3[v4];
        if ( !v5 )
          break;
        *v3++ = v5;
        --v0;
      }
      while ( v0 );
      if ( !v0 )
        --v3;
      *v3 = 0;
    }
    byte_18003AC64 = 1;
  }
  return &unk_18003AB80;
}
