/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1401BD694
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, void *a3)
{
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v10; // r8
  unsigned int *v11; // r14
  PHYSICAL_ADDRESS v12; // rdx
  unsigned int v13; // ebx
  PHYSICAL_ADDRESS v14[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v15[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = (_DWORD *)HvlpAcquireHypercallPage(v14, 1, 0LL, 8LL);
  v9 = HvlpAcquireHypercallPage(v15, 2, 0LL, 2056LL);
  v10 = v15[3];
  v11 = (unsigned int *)v9;
  v12 = v14[3];
  *v8 = a1;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           138LL,
                           (PHYSICAL_ADDRESS)v12.QuadPart,
                           (PHYSICAL_ADDRESS)v10.QuadPart) )
  {
    v7 = -1073741823;
  }
  else
  {
    v13 = *v11;
    if ( *a2 < *v11 )
      v7 = -1073741789;
    else
      memmove(a3, v11 + 1, 4LL * v13);
    *a2 = v13;
  }
  HvlpReleaseHypercallPage((__int64)v14);
  HvlpReleaseHypercallPage((__int64)v15);
  return v7;
}
