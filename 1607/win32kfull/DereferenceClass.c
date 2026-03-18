/*
 * XREFs of DereferenceClass @ 0x1C0055990
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *i; // rcx

  result = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a2 + 152) = 0LL;
  --*(_DWORD *)(result + 80);
  v4 = *(_QWORD *)(result + 64);
  if ( result != v4 )
  {
    --*(_DWORD *)(v4 + 80);
    if ( !*(_DWORD *)(result + 80) )
    {
      for ( i = *(_QWORD **)(*(_QWORD *)(result + 64) + 72LL); i != (_QWORD *)result; i = (_QWORD *)*i )
        ;
      return DestroyClass(a1);
    }
  }
  return result;
}
