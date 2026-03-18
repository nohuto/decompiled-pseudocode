/*
 * XREFs of Store @ 0x1C000E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v7);
  if ( !(_DWORD)result )
  {
    v5 = *(_OWORD **)(a2 + 80);
    v6 = *(_OWORD **)(a2 + 88);
    if ( v6 != v5 )
    {
      *v6 = *v5;
      v6[1] = v5[1];
      *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
      memset(v5, 0, 0x28uLL);
    }
    return WriteObject(a1, v7, *(_QWORD *)(a2 + 88));
  }
  return result;
}
