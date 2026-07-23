/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x1404BA214
 * Callers:
 *     RtlMakeSelfRelativeSD @ 0x1404BA0F0 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x14052DE3C (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x14068812C (RtlSelfRelativeToAbsoluteSD2.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  __int16 v9; // bx
  __int16 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int *result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v9 = *(_WORD *)(a1 + 2);
  v11 = v9 & 0x8000;
  if ( v9 < 0 )
  {
    v17 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v17 )
      v12 = a1 + v17;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v12;
  if ( v12 )
    *a3 = (4 * *(unsigned __int8 *)(v12 + 1) + 11) & 0xFFFFFFFC;
  else
    *a3 = 0;
  if ( (v9 & 4) == 0 )
    goto LABEL_28;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    goto LABEL_8;
  }
  v18 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v18 )
    v13 = v18 + a1;
  else
LABEL_28:
    v13 = 0LL;
LABEL_8:
  *a6 = v13;
  if ( v13 )
    *a7 = (*(unsigned __int16 *)(v13 + 2) + 3) & 0xFFFFFFFC;
  else
    *a7 = 0;
  if ( v11 )
  {
    v19 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v19 )
      v14 = a1 + v19;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v14;
  if ( v14 )
    *a5 = (4 * *(unsigned __int8 *)(v14 + 1) + 11) & 0xFFFFFFFC;
  else
    *a5 = 0;
  if ( (v9 & 0x10) == 0 )
    goto LABEL_15;
  if ( v11 )
  {
    v20 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v20 )
    {
LABEL_15:
      v15 = 0LL;
      goto LABEL_16;
    }
    v15 = a1 + v20;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24);
  }
LABEL_16:
  *a8 = v15;
  result = a9;
  if ( v15 )
    *a9 = (*(unsigned __int16 *)(v15 + 2) + 3) & 0xFFFFFFFC;
  else
    *a9 = 0;
  return result;
}
