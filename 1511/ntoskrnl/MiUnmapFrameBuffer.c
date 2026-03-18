/*
 * XREFs of MiUnmapFrameBuffer @ 0x140103140
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(unsigned __int64 *a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  BOOL v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int16 v15; // dx
  unsigned __int16 v16; // r8
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  *a4 = -1LL;
  v18 = MI_READ_PTE_LOCK_FREE(a1);
  v8 = v18;
  v9 = MI_READ_PTE_LOCK_FREE(&v18);
  v10 = MI_IS_PFN((v9 >> 12) & 0xFFFFFFFFFLL);
  v13 = 128LL;
  if ( a2 == 2 )
  {
    v13 = 896LL;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v10 )
        v13 = 0LL;
      else
        v13 = v8 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v13 = 384LL;
  }
  v14 = 48 * v12 - 0x58000000000LL;
  v15 = 1;
  if ( v10 )
  {
    v16 = 1;
    if ( (v11 & *(_QWORD *)(v14 + 40)) == 0xFFFFFFFFDLL )
      v16 = 2;
    if ( *(_WORD *)(v14 + 32) > v16 )
      a3 = 1;
  }
  else
  {
    *a4 = v12;
  }
  if ( a2 != 3 )
  {
    if ( (v8 & 0x800) != 0 )
      v15 = 4;
    v13 = (v13 & 0xFF1F ^ (v13 & 0xFF1F | (unsigned __int16)(32 * v15))) & 0x3E0 ^ v13 & 0xFFFFFFFFFFFFFF1FuLL;
  }
  *a1 = v13;
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow(a1, v13);
  return a3;
}
