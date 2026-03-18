/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1403FCE20
 * Callers:
 *     CmpQueryKeyData @ 0x1403D66A8 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     CmGetVisibleValueCount @ 0x1403D6924 (CmGetVisibleValueCount.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1403D69C4 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1403D6A44 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmGetVisibleSubkeyCount @ 0x1403DB0B4 (CmGetVisibleSubkeyCount.c)
 *     CmListGetPrevElement @ 0x1403DF088 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r9
  unsigned int v12; // edi
  const void *v13; // r10
  unsigned __int16 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r13
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  __int64 result; // rax
  int v22; // r12d
  int v23; // r13d
  unsigned __int16 v24; // ax
  unsigned int v25; // r13d
  unsigned int v26; // ecx
  unsigned int v27; // r15d
  unsigned int v28; // eax
  int v29; // eax
  const void *v30; // r15
  __int64 v31; // r12
  int v32; // r10d
  int VisibleValueCount; // r11d
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 PrevElement; // rax
  __int64 v39; // r11
  char v40; // al
  unsigned int v41; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-50h]
  const void *v46; // [rsp+50h] [rbp-48h]
  int v48; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v49; // [rsp+B0h] [rbp+18h]
  __int64 v50; // [rsp+B8h] [rbp+20h] BYREF

  v11 = a1;
  v12 = 0;
  v13 = 0LL;
  v46 = 0LL;
  v48 = -1;
  v14 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v14 *= 2;
  v50 = 0LL;
  v15 = *(_QWORD *)(a2 + 4);
  v16 = a7;
  if ( a7 && a8 )
  {
    v37 = a7 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v37, &v50);
      v44 = PrevElement;
      if ( !PrevElement )
        break;
      v40 = CmEqualTrans(*(_QWORD *)(PrevElement + 56), v39);
      v37 = v16 + 200;
      if ( v40 )
      {
        v37 = v16 + 200;
        if ( *(_DWORD *)(v44 + 68) == 8 )
        {
          v15 = *(_QWORD *)(v44 + 80);
          break;
        }
      }
    }
    v11 = a1;
    v13 = 0LL;
  }
  if ( !a3 )
  {
    v17 = v14;
    v49 = 0;
    *a6 = v14 + 16;
    v18 = a5;
    if ( a5 < 0x10 )
      return 3221225507LL;
    *(_QWORD *)a4 = v15;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 12) = v14;
    v19 = v18 - 16;
    if ( v19 < v14 )
    {
      v17 = v19;
      v49 = -2147483643;
    }
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      v20 = v19 >> 1;
      if ( v20 >= *(unsigned __int16 *)(a2 + 72) )
        v20 = *(unsigned __int16 *)(a2 + 72);
      while ( 1 )
      {
        v45 = v12;
        if ( v12 >= v20 )
          break;
        *(_WORD *)(a4 + 2LL * v12 + 16) = *(unsigned __int8 *)(v12 + a2 + 76);
        ++v12;
      }
    }
    else
    {
      memmove((void *)(a4 + 16), (const void *)(a2 + 76), v17);
    }
    return v49;
  }
  v22 = a3 - 1;
  if ( !v22 )
  {
    v23 = v14 + 24;
    v24 = *(_WORD *)(a2 + 74);
    if ( !v24 )
      goto LABEL_21;
    v23 = v24 + ((v14 + 27) & 0xFFFFFFFC);
    v13 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v11 + 8))(
                          v11,
                          *(unsigned int *)(a2 + 48),
                          &v48);
    v46 = v13;
    if ( v13 )
    {
      v11 = a1;
LABEL_21:
      v49 = 0;
      *a6 = v23;
      v25 = a5;
      if ( a5 < 0x18 )
      {
        result = 3221225507LL;
        v49 = -1073741789;
      }
      else
      {
        *(_QWORD *)a4 = v15;
        *(_DWORD *)(a4 + 8) = 0;
        *(_DWORD *)(a4 + 16) = *(unsigned __int16 *)(a2 + 74);
        *(_DWORD *)(a4 + 20) = v14;
        v26 = v14;
        if ( v25 - 24 < v14 )
        {
          v26 = v25 - 24;
          v49 = -2147483643;
        }
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
        {
          CmpCopyCompressedName(
            (_WORD *)(a4 + 24),
            v25 - 24,
            (unsigned __int8 *)(a2 + 76),
            *(unsigned __int16 *)(a2 + 72));
        }
        else
        {
          memmove((void *)(a4 + 24), (const void *)(a2 + 76), v26);
          v13 = v46;
        }
        if ( *(_WORD *)(a2 + 74) )
        {
          v27 = (v14 + 27) & 0xFFFFFFFC;
          *(_DWORD *)(a4 + 12) = v27;
          if ( v25 >= v27 )
            v12 = v25 - v27;
          v28 = *(unsigned __int16 *)(a2 + 74);
          if ( v12 < v28 )
          {
            v28 = v12;
            v49 = -2147483643;
          }
          memmove((void *)(a4 + v27), v13, v28);
          v13 = v46;
        }
        else
        {
          *(_DWORD *)(a4 + 12) = -1;
        }
        result = v49;
        v11 = a1;
      }
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v48);
        return v49;
      }
      return result;
    }
    return 3221225626LL;
  }
  if ( v22 != 1 )
    return 3221225485LL;
  v29 = *(unsigned __int16 *)(a2 + 74);
  LODWORD(v50) = v29 + 44;
  if ( (_WORD)v29 )
  {
    v30 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v11 + 8))(
                          v11,
                          *(unsigned int *)(a2 + 48),
                          &v48);
    v46 = v30;
    if ( !v30 )
      return 3221225626LL;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = a8;
  result = CmGetVisibleMaxNameLenAndClassLen(v16, a2, a8, &v41, &v42);
  if ( (int)result >= 0 )
  {
    result = CmGetVisibleMaxValueNameLenAndDataLen(v16, a2, v31, &v43, (unsigned int *)&v44);
    v49 = result;
    if ( (int)result >= 0 )
    {
      CmGetVisibleSubkeyCount(v16, a2, v31);
      VisibleValueCount = CmGetVisibleValueCount(v16, a2, v31);
      *a6 = v50;
      v34 = a5;
      if ( a5 < 0x2C )
      {
        result = 3221225507LL;
        v49 = -1073741789;
      }
      else
      {
        *(_QWORD *)a4 = v15;
        *(_DWORD *)(a4 + 24) = v41;
        *(_DWORD *)(a4 + 28) = v42;
        *(_DWORD *)(a4 + 36) = v43;
        *(_DWORD *)(a4 + 40) = v44;
        *(_DWORD *)(a4 + 8) = 0;
        *(_DWORD *)(a4 + 16) = *(unsigned __int16 *)(a2 + 74);
        *(_DWORD *)(a4 + 20) = v32;
        *(_DWORD *)(a4 + 32) = VisibleValueCount;
        if ( *(_WORD *)(a2 + 74) )
        {
          *(_DWORD *)(a4 + 12) = 44;
          v35 = v34 - 44;
          v36 = *(unsigned __int16 *)(a2 + 74);
          if ( v35 < v36 )
          {
            v36 = v35;
            v49 = -2147483643;
          }
          memmove((void *)(a4 + 44), v30, v36);
        }
        else
        {
          *(_DWORD *)(a4 + 12) = -1;
        }
        result = v49;
      }
      if ( v30 )
      {
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v48);
        return v49;
      }
    }
  }
  return result;
}
