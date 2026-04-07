/*
 * XREFs of ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180077E54
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800813B0 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800338D8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180033AE0 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::InvalidateBitmaps(CIconicBitmapRegistry *this, HWND *a2, int a3)
{
  unsigned int v6; // edi
  struct CWindowData *v7; // rdx
  CIconicBitmapRegistry *v8; // rcx
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  DWORD v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !GetWindowThreadProcessId(a2[5], &v14) || a3 != v14 )
  {
    v6 = -2147024809;
    v13 = 730;
    v10 = -2147024809;
    goto LABEL_16;
  }
  if ( a2[47] && CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)a2) )
  {
    *((_BYTE *)a2 + 578) &= 0xF5u;
    if ( a2[52] )
    {
      v9 = CIconicBitmapRegistry::RequestBitmap(v8, v7, 1);
      v6 = v9;
      if ( v9 < 0 )
      {
        v13 = 741;
LABEL_8:
        v10 = v9;
LABEL_16:
        MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v10, v13);
        return v6;
      }
    }
    else
    {
      CIconicBitmapRegistry::ClearBitmap(v8, (CWindowIconic **)v7);
    }
  }
  v11 = *((_QWORD *)this + 12);
  if ( v11 )
  {
    if ( *(HWND **)(v11 + 72) == a2 && !*((_BYTE *)this + 89) )
    {
      *((_BYTE *)this + 90) = 0;
      v9 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 1);
      v6 = v9;
      if ( v9 < 0 )
      {
        v13 = 753;
        goto LABEL_8;
      }
    }
  }
  return v6;
}
