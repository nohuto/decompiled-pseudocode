/*
 * XREFs of ?GetNextTokenBlock@CLegacyTokenBuffer@@QEBA_NPEAPEBEPEAI1@Z @ 0x1C004765C
 * Callers:
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0046AF0 (NtDCompositionGetFrameLegacyTokens.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacyTokenBuffer::GetNextTokenBlock(
        CLegacyTokenBuffer *this,
        const unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  CLegacyTokenBuffer *v5; // rdx

  v4 = 0;
  *a2 = (const unsigned __int8 *)(*((_QWORD *)this + 261) + 20LL);
  *a3 = *(_DWORD *)(*((_QWORD *)this + 261) + 2068LL);
  *a4 = *(_DWORD *)(*((_QWORD *)this + 261) + 16LL);
  v5 = (CLegacyTokenBuffer *)**((_QWORD **)this + 261);
  if ( v5 != (CLegacyTokenBuffer *)((char *)this + 16) )
  {
    *((_QWORD *)this + 261) = v5;
    return 1;
  }
  return v4;
}
