/*
 * XREFs of A_SHAUpdate @ 0x18000A4C0
 * Callers:
 *     RtlCreateVirtualAccountSid @ 0x180008FD0 (RtlCreateVirtualAccountSid.c)
 *     A_SHAFinal @ 0x18000A340 (A_SHAFinal.c)
 *     RtlCreateServiceSid @ 0x18000B8D0 (RtlCreateServiceSid.c)
 * Callees:
 *     SHATransform @ 0x18000A590 (SHATransform.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall A_SHAUpdate(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  char *v4; // rbp
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned int v8; // r14d
  unsigned __int64 v9; // r14

  v3 = a3;
  v4 = a2;
  result = a3 + *(_DWORD *)(a1 + 88);
  v6 = *(_DWORD *)(a1 + 88) & 0x3F;
  *(_DWORD *)(a1 + 88) = result;
  if ( (unsigned int)result < a3 )
    ++*(_DWORD *)(a1 + 84);
  if ( v6 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(a1 + v6), a2, 64 - v6);
      v4 += 64 - v6;
      v3 = v8 - 64;
      result = SHATransform(a1 + 64, a1);
      v6 = 0;
    }
  }
  if ( v3 >= 0x40 )
  {
    v9 = (unsigned __int64)v3 >> 6;
    do
    {
      result = SHATransform(a1 + 64, v4);
      v4 += 64;
      v3 -= 64;
      --v9;
    }
    while ( v9 );
  }
  if ( v3 )
    return (__int64)memmove((void *)(a1 + v6), v4, v3);
  return result;
}
