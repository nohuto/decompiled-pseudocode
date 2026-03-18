/*
 * XREFs of AuthzBasepAddAccessTypeList @ 0x140107940
 * Callers:
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015A940 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140162460 (SepNormalAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140107AB0 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepUpdateParentTypeList @ 0x14015ACDC (AuthzBasepUpdateParentTypeList.c)
 *     AuthzBasepSetAppContainerAccessReasons @ 0x140269EA4 (AuthzBasepSetAppContainerAccessReasons.c)
 */

void __fastcall AuthzBasepAddAccessTypeList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v8; // edi
  unsigned int v10; // r14d
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // eax
  char v14; // r11
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // r11
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx

  v8 = a2;
  switch ( a6 )
  {
    case 1:
      v10 = a5;
      v11 = a1 + 48LL * a3;
      v12 = *(_DWORD *)(v11 + 28);
      v13 = v12 | a5 & ~*(_DWORD *)(v11 + 32);
      *(_DWORD *)(v11 + 28) = v13;
      if ( v12 == v13 )
      {
        v14 = a6;
        goto LABEL_4;
      }
      v15 = *(_DWORD *)(v11 + 32);
      v16 = 0x10000;
      goto LABEL_7;
    case 0:
      v10 = a5;
      v11 = a1 + 48LL * a3;
      v17 = *(_DWORD *)(v11 + 24);
      v24 = v17 & ~a5;
      *(_DWORD *)(v11 + 24) = v24;
      if ( v17 == v24 )
        return;
      v16 = 0x10000;
      goto LABEL_8;
    case 2:
      v10 = a5;
      v11 = a1 + 48LL * a3;
      v12 = *(_DWORD *)(v11 + 32);
      v27 = v12 | a5 & ~*(_DWORD *)(v11 + 28);
      *(_DWORD *)(v11 + 32) = v27;
      if ( v12 == v27 )
      {
        v14 = 1;
        goto LABEL_4;
      }
      v15 = *(_DWORD *)(v11 + 28);
      v16 = 0x20000;
LABEL_7:
      v17 = ~v15 & ~v12;
LABEL_8:
      AuthzBasepSetAccessReasons(v10 & v17, v16, a4, *(_QWORD *)(v11 + 40), 0);
      goto LABEL_4;
  }
  if ( a6 != 3 )
    return;
  v10 = a5;
  v11 = a1 + 48LL * a3;
  v25 = *(_DWORD *)(v11 + 28);
  v26 = a5 & v25;
  *(_DWORD *)(v11 + 28) = v26;
  if ( v25 == (_DWORD)v26 )
    v14 = 1;
  else
    AuthzBasepSetAppContainerAccessReasons(v26, a2, a4, *(_QWORD *)(v11 + 40));
LABEL_4:
  if ( v8 != 1 )
  {
    if ( !v14 )
      AuthzBasepUpdateParentTypeList(a1, v8, a3, a4, a6);
    v18 = a3 + 1;
    if ( (unsigned int)v18 < v8 )
    {
      v19 = 48 * v18 + a1 + 32;
      do
      {
        if ( *(_WORD *)(v19 - 32) <= *(_WORD *)v11 )
          return;
        switch ( a6 )
        {
          case 1:
            v20 = ~*(_DWORD *)v19;
            v21 = v20 & ~*(_DWORD *)(v19 - 4);
            a2 = v10 & v20;
            *(_DWORD *)(v19 - 4) |= a2;
            v22 = v10 & v21;
            if ( v22 )
              goto LABEL_18;
            break;
          case 0:
            v32 = *(_DWORD *)(v19 - 8);
            *(_DWORD *)(v19 - 8) = v32 & ~v10;
            v22 = v10 & v32;
            if ( !v22 )
              break;
LABEL_18:
            v23 = 0x10000;
LABEL_19:
            AuthzBasepSetAccessReasons(v22, v23, a4, *(_QWORD *)(v19 + 8), 0);
            break;
          case 2:
            v30 = ~*(_DWORD *)(v19 - 4);
            v31 = v30 & ~*(_DWORD *)v19;
            a2 = v10 & v30;
            *(_DWORD *)v19 |= a2;
            v22 = v10 & v31;
            if ( v22 )
            {
              v23 = 0x20000;
              goto LABEL_19;
            }
            break;
          default:
            v28 = (*(_DWORD *)(v19 - 4) & v10) == 0;
            v29 = *(_DWORD *)(v19 - 4) & v10;
            *(_DWORD *)(v19 - 4) = v29;
            if ( !v28 )
              AuthzBasepSetAppContainerAccessReasons(v29, a2, a4, *(_QWORD *)(v19 + 8));
            break;
        }
        LODWORD(v18) = v18 + 1;
        v19 += 48LL;
      }
      while ( (unsigned int)v18 < v8 );
    }
  }
}
