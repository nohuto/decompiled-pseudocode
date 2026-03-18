/*
 * XREFs of ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0067EE8
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C006BA14 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0142F04 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineTriangleFillRoutine(
        struct SURFACE *a1,
        struct XEPALOBJ *a2,
        void (**a3)(struct SURFACE *, struct _TRIANGLEDATA *),
        void (**a4)(struct SURFACE *, struct _GRADIENTRECTDATA *))
{
  int v4; // ecx
  void (*v5)(struct SURFACE *, struct _GRADIENTRECTDATA *); // rax
  int v7; // ecx
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // edx

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 1:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill1;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB1;
      break;
    case 2:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill4;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB4;
      break;
    case 3:
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill8;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB8;
      break;
    case 4:
      v8 = *(_DWORD **)(*(_QWORD *)a2 + 120LL);
      v9 = v8[1];
      v10 = v8[2];
      if ( *v8 == 63488 )
      {
        if ( v9 == 2016 && v10 == 31 )
        {
          *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16_565;
          v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16_565;
          break;
        }
      }
      else if ( *v8 == 31744 && v9 == 992 && v10 == 31 )
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16_555;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16_555;
        break;
      }
      *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill16Bitfields;
      v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB16Bitfields;
      break;
    case 5:
      v7 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
      if ( (v7 & 4) != 0 )
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24RGB;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24RGB;
      }
      else if ( (v7 & 8) != 0 )
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24BGR;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24BGR;
      }
      else
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill24Bitfields;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB24Bitfields;
      }
      break;
    case 6:
      v4 = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
      if ( (v4 & 4) != 0 )
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32RGB;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32RGB;
      }
      else if ( (v4 & 8) != 0 )
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32BGRA;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32BGRA;
      }
      else
      {
        *a3 = (void (*)(struct SURFACE *, struct _TRIANGLEDATA *))vGradientFill32Bitfields;
        v5 = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32Bitfields;
      }
      break;
    default:
      *a3 = 0LL;
      *a4 = 0LL;
      return 1LL;
  }
  *a4 = v5;
  return 1LL;
}
