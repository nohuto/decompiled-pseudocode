/*
 * XREFs of ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0067358
 * Callers:
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C003DF8C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00284C0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 */

__int64 __fastcall DC::bOldPenNominal(DC *this, struct EXFORMOBJ *a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // ecx
  bool v9; // sf
  int v10; // r8d
  int v11; // r10d
  int v12; // r8d
  bool v13; // sf
  int v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+24h] [rbp-Ch]
  int v16; // [rsp+2Ch] [rbp-4h]
  int v17; // [rsp+40h] [rbp+10h] BYREF
  int v18; // [rsp+44h] [rbp+14h]

  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x20) != 0 )
  {
    v14 = a3;
    v16 = a3;
    v15 = 0LL;
    if ( (unsigned int)EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v14, (struct _VECTORFX *)&v14, 2LL) )
    {
      v6 = v14;
      if ( v14 < 0 )
        v6 = -v14;
      v7 = v15;
      if ( (int)v15 < 0 )
        v7 = -(int)v15;
      if ( v6 <= v7 )
      {
        v8 = v15;
        v9 = (int)v15 < 0;
      }
      else
      {
        v8 = v14;
        v9 = v14 < 0;
      }
      if ( v9 )
        v8 = -v8;
      if ( v8 < 24 )
      {
        v10 = HIDWORD(v15);
        if ( v15 < 0 )
          v10 = -HIDWORD(v15);
        v11 = v16;
        if ( v16 < 0 )
          v11 = -v16;
        if ( v10 <= v11 )
        {
          v12 = v16;
          v13 = v16 < 0;
        }
        else
        {
          v12 = HIDWORD(v15);
          v13 = v15 < 0;
        }
        if ( v13 )
          v12 = -v12;
        if ( v12 < 24 && v14 * v14 + (int)v15 * (int)v15 < 576 && HIDWORD(v15) * HIDWORD(v15) + v16 * v16 < 576 )
          return 1;
      }
    }
  }
  else
  {
    v17 = a3;
    v18 = 0;
    if ( (unsigned int)EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v17, (struct _VECTORFX *)&v17, 1LL) )
    {
      v4 = v17;
      if ( v17 < 0 )
        v4 = -v17;
      if ( v4 < 24 )
        return 1;
    }
  }
  return v3;
}
