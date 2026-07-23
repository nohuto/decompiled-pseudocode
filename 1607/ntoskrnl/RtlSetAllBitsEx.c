/*
 * XREFs of RtlSetAllBitsEx @ 0x14013B764
 * Callers:
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetAllBitsEx(_QWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = (_DWORD *)a1[1];
  result = (*a1 & 0x1F) != 0;
  v3 = (unsigned __int64)(4 * (result + (*a1 >> 5))) >> 2;
  if ( v3 )
  {
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      *v1 = -1;
      if ( !--v3 )
        return result;
      ++v1;
    }
    result = -1LL;
    memset(v1, 0xFFu, 8 * (v3 >> 1));
    if ( (v3 & 1) != 0 )
      v1[v3 - 1] = -1;
  }
  return result;
}
