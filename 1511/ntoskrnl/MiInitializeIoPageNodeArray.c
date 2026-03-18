/*
 * XREFs of MiInitializeIoPageNodeArray @ 0x1400C1C88
 * Callers:
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeIoPageNodeArray(__int64 a1)
{
  unsigned __int16 *v1; // rdx
  unsigned __int16 *v2; // rcx
  __int64 result; // rax
  unsigned __int16 v4; // [rsp+8h] [rbp+8h]

  v1 = *(unsigned __int16 **)(a1 + 48);
  v2 = v1 + 512;
  while ( v1 < v2 )
  {
    v4 = *v1 | 0xC000;
    result = v4;
    *v1++ = v4;
  }
  return result;
}
