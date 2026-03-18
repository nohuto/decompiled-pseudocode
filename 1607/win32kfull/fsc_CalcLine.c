/*
 * XREFs of fsc_CalcLine @ 0x1C00C03E0
 * Callers:
 *     fsc_FillGlyph @ 0x1C00BFBAC (fsc_FillGlyph.c)
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00C0F2C (fsc_BeginElement.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall fsc_CalcLine(int a1, int a2, int a3, int a4, unsigned __int16 a5)
{
  int v6; // r14d
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // r11d
  int v10; // r15d
  signed int v11; // r10d
  unsigned int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // r14d
  __int64 result; // rax
  int v17; // esi
  int v18; // ebx
  int v19; // edi
  signed int v20; // edi
  int v21; // eax
  signed int v22; // ebx
  int v23; // edx
  int v24; // r15d
  int v25; // r14d
  int v26; // r14d
  int v27; // eax
  unsigned int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // r15d
  int v32; // r14d
  int v33; // eax
  int v34; // [rsp+40h] [rbp-38h]
  int v35; // [rsp+44h] [rbp-34h]
  int v36; // [rsp+48h] [rbp-30h]
  int v37; // [rsp+4Ch] [rbp-2Ch]
  int v38; // [rsp+50h] [rbp-28h]
  int v39; // [rsp+54h] [rbp-24h]
  int v40; // [rsp+58h] [rbp-20h]
  __int64 (__fastcall *v41)(_QWORD, _QWORD); // [rsp+60h] [rbp-18h] BYREF
  __int64 (__fastcall *v42)(_QWORD, _QWORD); // [rsp+68h] [rbp-10h] BYREF
  int v44; // [rsp+C8h] [rbp+50h]
  int v45; // [rsp+C8h] [rbp+50h]
  int v46; // [rsp+D0h] [rbp+58h] BYREF
  int v47; // [rsp+D8h] [rbp+60h] BYREF

  v47 = a4;
  v46 = a3;
  v37 = -1;
  if ( a4 < a2 )
  {
    v35 = -1;
    v38 = 1;
    v22 = ((a2 - 33) & 0xFFFFFFC0) + 32;
    v36 = a2 - v22;
    v9 = 4;
    v7 = v22 >> 6;
    v6 = 1;
    v8 = v7 - ((a4 + 32) >> 6) + 1;
    v10 = a2 - a4;
  }
  else
  {
    v35 = 1;
    v6 = 0;
    v38 = 0;
    v7 = (int)(((a2 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v36 = ((a2 + 32) & 0xFFFFFFC0) + 32 - a2;
    v8 = ((a4 - 33) >> 6) - v7 + 1;
    v9 = 1;
    v10 = a4 - a2;
  }
  if ( a4 == a2 )
  {
    if ( (a5 & 2) != 0 )
      return 0LL;
    v18 = a2 - 1;
    if ( a3 >= a1 )
      v18 = a2;
    v7 = (v18 + 32) >> 6;
    v8 = 0;
  }
  if ( a3 < a1 )
  {
    v40 = 1;
    v6 = 1 - v6;
    v20 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v9 = (v9 != 1) + 2;
    v21 = a1 - v20;
    v12 = v20 >> 6;
    v39 = v21;
    v13 = v12 - ((a3 + 32) >> 6) + 1;
    v14 = a1 - a3;
  }
  else
  {
    v40 = 0;
    v37 = 1;
    v11 = ((a1 + 32) & 0xFFFFFFC0) + 32;
    v12 = v11 >> 6;
    v39 = v11 - a1;
    v13 = ((a3 - 33) >> 6) - (v11 >> 6) + 1;
    v14 = a3 - a1;
  }
  v44 = v14;
  v34 = v13;
  if ( a3 == a1 )
  {
    v19 = a1 - 1;
    if ( a4 <= a2 )
      v19 = a1;
    v12 = (v19 + 32) >> 6;
    v34 = 0;
  }
  fsc_BeginElement(a5, v9, 0, 1, (__int64)&v46, (__int64)&v47, (__int64)&v41, (__int64)&v42);
  if ( (a5 & 2) != 0 )
  {
    if ( a1 != v46 )
    {
      v27 = v36 * v44;
      v28 = v40 + v12;
      v29 = v10 * v39;
      v45 = v44 << 6;
      v30 = v8 + v34;
      v31 = -64 * v10;
      v32 = v27 - v29 + v6;
      v33 = 0;
      v47 = 0;
      if ( v8 + v34 > 0 )
      {
        while ( 1 )
        {
          if ( v32 <= 0 )
          {
            result = v41(v28, v7);
            if ( (_DWORD)result )
              return result;
            v33 = v47;
            v7 += v35;
            v30 = v8 + v34;
            v32 += v45;
          }
          else
          {
            v28 += v37;
            v32 += v31;
          }
          v47 = ++v33;
          if ( v33 >= v30 )
            return 0LL;
        }
      }
      return 0LL;
    }
    v26 = 0;
    if ( v8 <= 0 )
      return 0LL;
    while ( 1 )
    {
      result = v41(v12, v7);
      if ( (_DWORD)result )
        break;
      v7 += v35;
      if ( ++v26 >= v8 )
        return 0LL;
    }
  }
  else
  {
    if ( a2 != v47 )
    {
      if ( a1 == v46 )
      {
        v15 = 0;
        if ( v8 > 0 )
        {
          while ( 1 )
          {
            result = v41(v12, v7);
            if ( (_DWORD)result )
              break;
            v7 += v35;
            if ( ++v15 >= v8 )
              return 0LL;
          }
          return result;
        }
      }
      else
      {
        v47 = 0;
        v23 = v10 * v39;
        v24 = -64 * v10;
        v25 = v36 * v44 - v23 + v6;
        if ( v8 + v34 > 0 )
        {
          while ( 1 )
          {
            if ( v25 <= 0 )
            {
              result = v41(v12 + v40, v7);
              if ( (_DWORD)result )
                return result;
              v7 += v35;
              v25 += v44 << 6;
            }
            else
            {
              result = v42(v12, v7 + v38);
              if ( (_DWORD)result )
                return result;
              v12 += v37;
              v25 += v24;
            }
            if ( ++v47 >= v8 + v34 )
              return 0LL;
          }
        }
      }
      return 0LL;
    }
    v17 = 0;
    if ( v34 <= 0 )
      return 0LL;
    while ( 1 )
    {
      result = v42(v12, v7);
      if ( (_DWORD)result )
        break;
      v12 += v37;
      if ( ++v17 >= v34 )
        return 0LL;
    }
  }
  return result;
}
