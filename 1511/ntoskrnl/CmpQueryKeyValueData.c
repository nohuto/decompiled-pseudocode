/*
 * XREFs of CmpQueryKeyValueData @ 0x140422850
 * Callers:
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmpGetValueDataFromCache @ 0x1403F4358 (CmpGetValueDataFromCache.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Src, unsigned int a6, int *a7)
{
  int v8; // r11d
  __int64 v9; // r10
  unsigned int v10; // r15d
  void *ValueDataFromCache; // rbx
  _DWORD *v12; // rsi
  unsigned __int16 v13; // cx
  unsigned int v14; // ecx
  char v15; // r8
  unsigned int v16; // r12d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // r14d
  int v21; // r9d
  unsigned int v22; // r14d
  char v23; // r9
  size_t v24; // r8
  int v25; // edx
  unsigned int v26; // r13d
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int i; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _WORD *v33; // rcx
  int v34; // r9d
  unsigned int v35; // ecx
  char v36; // r8
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // r14d
  __int64 v40; // [rsp+58h] [rbp-40h]
  __int64 v41; // [rsp+A0h] [rbp+8h] BYREF
  int v42; // [rsp+A8h] [rbp+10h]
  int v43; // [rsp+B0h] [rbp+18h] BYREF
  char v44; // [rsp+B8h] [rbp+20h] BYREF

  v42 = a2;
  v41 = a1;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  ValueDataFromCache = 0LL;
  v44 = 0;
  v43 = -1;
  v40 = *(_QWORD *)(a1 + 32);
  v12 = Src;
  v13 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v13 *= 2;
  if ( a4 != 2 )
  {
    if ( !a4 )
    {
      v30 = v13;
      v16 = 0;
      *a7 = v13 + 12;
      v31 = a6;
      if ( a6 < 0xC )
      {
        v16 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[2] = v30;
        v32 = v31 - 12;
        if ( v32 < v30 )
        {
          v30 = v32;
          v16 = -2147483643;
        }
        v33 = v12 + 3;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
          CmpCopyCompressedName(v33, v30, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
        else
          memmove(v33, (const void *)(a3 + 20), v30);
      }
      goto LABEL_20;
    }
    v21 = a4 - 1;
    if ( v21 )
    {
      v34 = v21 - 2;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v35 = *(_DWORD *)(a3 + 4);
          if ( v35 < 0x80000000 )
          {
            v36 = 0;
          }
          else
          {
            v35 += 0x80000000;
            v36 = 1;
          }
          v16 = 0;
          *a7 = v35 + 8;
          v37 = a6;
          if ( a6 < 8 )
          {
            v16 = -1073741789;
          }
          else
          {
            *v12 = *(_DWORD *)(a3 + 12);
            v12[1] = v35;
            v38 = v37 - 8;
            v39 = v35;
            if ( v38 < v35 )
            {
              v39 = v38;
              v16 = -2147483643;
            }
            if ( v35 )
            {
              if ( v36 == 1 )
              {
                ValueDataFromCache = (void *)(a3 + 8);
              }
              else
              {
                ValueDataFromCache = (void *)CmpGetValueDataFromCache(v9, v8, a3, (__int64)&v44, (__int64)&v43);
                if ( !ValueDataFromCache )
                  v16 = -1073741670;
              }
              if ( ValueDataFromCache )
                memmove(v12 + 2, ValueDataFromCache, v39);
            }
          }
        }
        else
        {
          v16 = -1073741811;
        }
        goto LABEL_20;
      }
    }
    v22 = *(_DWORD *)(a3 + 4);
    if ( v22 >= 0x80000000 )
    {
      v22 += 0x80000000;
      v23 = 1;
    }
    else
    {
      v23 = 0;
    }
    LOBYTE(Src) = v23;
    v24 = v13;
    v25 = v13 + v22 + 20;
    v26 = 0;
    if ( v22 )
    {
      v26 = (v13 + 27) & 0xFFFFFFF8;
      if ( v26 > (unsigned int)v13 + 20 )
        v25 = v26 + v22;
    }
    v16 = 0;
    *a7 = v25;
    v27 = a6;
    if ( a6 < 0x14 )
    {
      v16 = -1073741789;
      goto LABEL_20;
    }
    *v12 = 0;
    v12[1] = *(_DWORD *)(a3 + 12);
    v12[3] = v22;
    v12[4] = v24;
    if ( v27 - 20 < (unsigned int)v24 )
    {
      v24 = v27 - 20;
      v16 = -2147483643;
    }
    if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    {
      v28 = (unsigned int)v24 >> 1;
      if ( v28 >= *(unsigned __int16 *)(a3 + 2) )
        v28 = *(unsigned __int16 *)(a3 + 2);
      for ( i = 0; i < v28; ++i )
        *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
    }
    else
    {
      memmove(v12 + 5, (const void *)(a3 + 20), v24);
      v23 = (char)Src;
      v9 = v41;
      v8 = v42;
    }
    if ( !v22 )
    {
      v12[2] = -1;
      goto LABEL_20;
    }
    if ( v23 != 1 )
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 32),
                              v8,
                              a3,
                              (unsigned int)&v41,
                              (__int64)&Src,
                              (__int64)&v44,
                              (__int64)&v43) )
      {
        ValueDataFromCache = Src;
        if ( Src )
        {
LABEL_47:
          v12[2] = v26;
          if ( a6 >= v26 )
            v10 = a6 - v26;
          if ( v10 < v22 )
          {
            v22 = v10;
            v16 = -2147483643;
          }
          if ( ValueDataFromCache )
            memmove((char *)v12 + v26, ValueDataFromCache, v22);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
      }
      v16 = -1073741670;
      goto LABEL_47;
    }
    ValueDataFromCache = (void *)(a3 + 8);
    goto LABEL_47;
  }
  v14 = *(_DWORD *)(a3 + 4);
  if ( v14 >= 0x80000000 )
  {
    v14 += 0x80000000;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  v16 = 0;
  *a7 = v14 + 12;
  v17 = a6;
  if ( a6 < 0xC )
  {
    v16 = -1073741789;
    goto LABEL_20;
  }
  *v12 = 0;
  v12[1] = *(_DWORD *)(a3 + 12);
  v12[2] = v14;
  v18 = v17 - 12;
  v19 = v14;
  if ( v18 < v14 )
  {
    v19 = v18;
    v16 = -2147483643;
  }
  if ( v14 )
  {
    if ( v15 == 1 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
    }
    else
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 32),
                              v8,
                              a3,
                              (unsigned int)&v41,
                              (__int64)&Src,
                              (__int64)&v44,
                              (__int64)&v43) )
      {
        ValueDataFromCache = Src;
        if ( Src )
        {
LABEL_13:
          memmove(v12 + 3, ValueDataFromCache, v19);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
      }
      v16 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_20;
    goto LABEL_13;
  }
LABEL_20:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v44 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(v40 + 16))(v40, &v43);
  }
  return v16;
}
