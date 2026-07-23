/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x18007020C
 * Callers:
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18006FCD0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlCopySecurityDescriptor @ 0x18006FE30 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006FEE0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800700C0 (RtlMakeSelfRelativeSD.c)
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
  __int16 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int *result; // rax

  v10 = *(_WORD *)(a1 + 2) & 0x8000;
  if ( v10 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      v11 = a1 + *(unsigned int *)(a1 + 4);
    else
      v11 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v11;
  if ( v11 )
    *a3 = (4 * *(unsigned __int8 *)(v11 + 1) + 11) & 0xFFFFFFFC;
  else
    *a3 = 0;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( !v10 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 16) )
    {
      v12 = a1 + *(unsigned int *)(a1 + 16);
      goto LABEL_10;
    }
  }
  v12 = 0LL;
LABEL_10:
  *a6 = v12;
  if ( v12 )
    *a7 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
  else
    *a7 = 0;
  if ( v10 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      v13 = a1 + *(unsigned int *)(a1 + 8);
    else
      v13 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v13;
  if ( v13 )
    *a5 = (4 * *(unsigned __int8 *)(v13 + 1) + 11) & 0xFFFFFFFC;
  else
    *a5 = 0;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_18;
  if ( v10 )
  {
    if ( !*(_DWORD *)(a1 + 12) )
    {
LABEL_18:
      v14 = 0LL;
      goto LABEL_19;
    }
    v14 = a1 + *(unsigned int *)(a1 + 12);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
  }
LABEL_19:
  *a8 = v14;
  result = a9;
  if ( v14 )
    *a9 = (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
  else
    *a9 = 0;
  return result;
}
