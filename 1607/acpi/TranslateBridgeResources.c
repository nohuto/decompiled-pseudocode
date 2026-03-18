/*
 * XREFs of TranslateBridgeResources @ 0x1C00A1410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int8 Type; // bp
  ULONGLONG v11; // rax
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  unsigned __int64 QuadPart; // r9
  ULONGLONG v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rcx
  char v20; // al
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx

  Type = a2->Type;
  v11 = RtlCmDecodeMemIoResource(a2, 0LL);
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0;
  QuadPart = a2->u.Generic.Start.QuadPart;
  v15 = v11;
  v16 = 0;
  if ( !v12 )
    return 3221226021LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(a1 + 16) + 40LL * v16;
    v18 = *(_DWORD *)(v17 + 32);
    if ( a3 != 1 )
      break;
    if ( (v18 & 2) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *(_BYTE *)v17;
      goto LABEL_7;
    }
LABEL_10:
    if ( ++v16 >= v12 )
      return 3221226021LL;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_10;
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(_BYTE *)(v17 + 1);
LABEL_7:
  if ( v20 != Type || QuadPart < v19 || QuadPart + v15 > *(_QWORD *)(v17 + 24) + v19 )
    goto LABEL_10;
  v22 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)a7 = *(_OWORD *)&a2->Type;
  *(_DWORD *)(a7 + 16) = *((_DWORD *)&a2->u.Memory48 + 3);
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    *(_BYTE *)a7 = *(_BYTE *)(v22 + 40LL * v16 + 1);
    v23 = *(_QWORD *)(v22 + 40LL * v16 + 8);
    v24 = *(_QWORD *)(v22 + 40LL * v16 + 16);
  }
  else
  {
    v13 = 288;
    *(_BYTE *)a7 = *(_BYTE *)(v22 + 40LL * v16);
    v23 = *(_QWORD *)(v22 + 40LL * v16 + 16);
    v24 = *(_QWORD *)(v22 + 40LL * v16 + 8);
  }
  *(_QWORD *)(a7 + 4) = a2->u.Generic.Start.QuadPart + v24 - v23;
  return v13;
}
