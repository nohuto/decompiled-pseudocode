/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180019790
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18001970C (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180147C7C (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  bool v12; // dl
  __int64 v13; // rax
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 1401;
    goto LABEL_48;
  }
  v10 = *((_QWORD *)this + 40) + a2;
  switch ( *(_DWORD *)v10 )
  {
    case 0:
      *a4 = 0;
      return v9;
    case 0x11:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1422;
        goto LABEL_48;
      }
      *(_BYTE *)a3 = *(_BYTE *)(v10 + 8);
      *((_DWORD *)a3 + 16) = 17;
      goto LABEL_42;
    case 0x12:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1429;
        goto LABEL_48;
      }
      *(_DWORD *)a3 = *(_DWORD *)(v10 + 8);
      *((_DWORD *)a3 + 16) = 18;
      goto LABEL_42;
    case 0x23:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1436;
        goto LABEL_48;
      }
      *((_DWORD *)a3 + 16) = 35;
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
      goto LABEL_42;
    case 0x34:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1443;
        goto LABEL_48;
      }
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v10 + 16);
      goto LABEL_42;
    case 0x45:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1450;
        goto LABEL_48;
      }
      *((_DWORD *)a3 + 16) = 69;
LABEL_24:
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
      goto LABEL_42;
    case 0x46:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1457;
        goto LABEL_48;
      }
      *((_DWORD *)a3 + 16) = 70;
      goto LABEL_24;
    case 0x47:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1464;
        goto LABEL_48;
      }
      *((_DWORD *)a3 + 16) = 71;
      goto LABEL_24;
  }
  if ( *(_DWORD *)v10 != 104 )
  {
    if ( *(_DWORD *)v10 != 265 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5CDu);
      return v9;
    }
    v8 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a3 + 16) = 265;
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v10 + 24);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(v10 + 40);
      *((_OWORD *)a3 + 3) = *(_OWORD *)(v10 + 56);
      goto LABEL_42;
    }
    v14 = 1478;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v14);
    return v9;
  }
  v8 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 1471;
    goto LABEL_48;
  }
  *((_DWORD *)a3 + 16) = 104;
  *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
  *((_QWORD *)a3 + 2) = *(_QWORD *)(v10 + 24);
LABEL_42:
  *((_BYTE *)a3 + 68) = 1;
  v13 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v13 + 4) & 0x40000000) != 0 || *(int *)(v13 + 4) < 0 )
    CExpression::LogCacheAccess(this, v12, a2, a3);
  *a4 = 1;
  return v9;
}
