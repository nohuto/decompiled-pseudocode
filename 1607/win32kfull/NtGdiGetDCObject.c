/*
 * XREFs of NtGdiGetDCObject @ 0x1C004C540
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(HDC a1, int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // esi
  __int64 *v7; // rax
  struct SURFACE *v8; // rcx
  _QWORD v10[6]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v11; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  _QWORD v14[10]; // [rsp+78h] [rbp+7h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v4 = (_QWORD *)v10[0];
  if ( v10[0] )
  {
    v5 = *(_QWORD *)(v10[0] + 80LL);
    v6 = *(_DWORD *)(v5 + 8);
    if ( (v6 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v10[0], *(_QWORD *)(v5 + 16));
      v4 = (_QWORD *)v10[0];
    }
    if ( (v6 & 0x2000) != 0 )
    {
      GreDCSelectPen(v4, *(_QWORD *)(v4[10] + 24LL));
      v4 = (_QWORD *)v10[0];
    }
    switch ( a2 )
    {
      case 0x50000:
        DCOBJ::DCOBJ((DCOBJ *)v14);
        v12 = 0LL;
        v11 = 0LL;
        v13 = 0;
        v14[0] = 0LL;
        memset(&v14[6], 0, 24);
        DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v11, (struct XDCOBJ *)v10);
        v8 = *(struct SURFACE **)(v10[0] + 512LL);
        if ( !v8 )
          v8 = SURFACE::pdibDefault;
        v3 = *((_QWORD *)v8 + 4);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v11);
        break;
      case 0x80000:
        v3 = v4[11];
        break;
      case 0xA0000:
        v3 = *(_QWORD *)(v4[10] + 176LL);
        break;
      case 0x100000:
        v7 = (__int64 *)v4[18];
        goto LABEL_13;
      default:
        if ( ((a2 - 3145728) & 0xFFDFFFFF) == 0 )
        {
          v7 = (__int64 *)v4[19];
LABEL_13:
          v3 = *v7;
        }
        break;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v3;
}
