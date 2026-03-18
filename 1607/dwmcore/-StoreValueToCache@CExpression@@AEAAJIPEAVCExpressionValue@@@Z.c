/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18008A020
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18001970C (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v5 = *((_QWORD *)this + 40);
  if ( !v5 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x200u);
LABEL_48:
    v14 = v6;
    v15 = 1290;
    goto LABEL_49;
  }
  if ( a2 + 8 < a2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x204u);
    goto LABEL_48;
  }
  if ( a2 + 8 > *((_DWORD *)this + 82) )
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x209u);
    goto LABEL_48;
  }
  v7 = v5 + a2;
  if ( !*(_DWORD *)v7 )
    *(_DWORD *)v7 = *((_DWORD *)a3 + 16);
  v8 = *((_DWORD *)a3 + 16);
  if ( v8 == 18 )
  {
    if ( *((_QWORD *)this + 40) )
    {
      if ( a2 + 12 < a2 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x204u);
      }
      else
      {
        if ( a2 + 12 <= *((_DWORD *)this + 82) )
        {
          *(_DWORD *)(v7 + 8) = *(_DWORD *)a3;
          return 0LL;
        }
        v6 = -2147483637;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x209u);
      }
    }
    else
    {
      v6 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x200u);
    }
    v14 = v6;
    v15 = 1321;
  }
  else
  {
    if ( v8 != 265 )
    {
      switch ( v8 )
      {
        case 17:
          result = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
          v10 = result;
          if ( (int)result >= 0 )
          {
            *(_BYTE *)(v7 + 8) = *(_BYTE *)a3;
            return result;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x522u);
          return v10;
        case 35:
          result = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
          v10 = result;
          if ( (int)result >= 0 )
          {
            *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
            return result;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x530u);
          return v10;
        case 52:
          LODWORD(result) = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
          v10 = result;
          if ( (int)result >= 0 )
          {
            *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
            *(_DWORD *)(v7 + 16) = *((_DWORD *)a3 + 2);
            return (unsigned int)result;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x537u);
          return v10;
        case 69:
          v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
          v10 = v11;
          if ( v11 >= 0 )
            goto LABEL_21;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x53Eu);
          return v10;
        case 70:
          v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
          v10 = v12;
          if ( v12 >= 0 )
            goto LABEL_21;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x545u);
          return v10;
        case 71:
          v13 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
          v10 = v13;
          if ( v13 >= 0 )
          {
LABEL_21:
            result = v10;
            *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
            return result;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x54Cu);
          return v10;
        case 104:
          result = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
          v10 = result;
          if ( (int)result >= 0 )
          {
            *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
            *(_QWORD *)(v7 + 24) = *((_QWORD *)a3 + 2);
            return result;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x553u);
          break;
        default:
          v10 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x561u);
          return v10;
      }
      return v10;
    }
    if ( *((_QWORD *)this + 40) )
    {
      if ( a2 + 72 < a2 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x204u);
      }
      else
      {
        if ( a2 + 72 <= *((_DWORD *)this + 82) )
        {
          result = 0LL;
          *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
          *(_OWORD *)(v7 + 24) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v7 + 40) = *((_OWORD *)a3 + 2);
          *(_OWORD *)(v7 + 56) = *((_OWORD *)a3 + 3);
          return result;
        }
        v6 = -2147483637;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x209u);
      }
    }
    else
    {
      v6 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x200u);
    }
    v14 = v6;
    v15 = 1370;
  }
LABEL_49:
  v10 = v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
  return v10;
}
