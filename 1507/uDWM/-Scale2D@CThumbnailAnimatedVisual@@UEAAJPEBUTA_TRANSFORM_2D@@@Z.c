/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18009A180
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(CThumbnailAnimatedVisual *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  LONG v9; // eax
  struct tagPOINT *v10; // rdi
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]
  struct tagPOINT v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4) - *((_DWORD *)this + 2);
  if ( v2 < 0 )
    v2 = 0;
  v5 = RoundToNearestInt((float)v2 * *((float *)a2 + 5));
  v6 = *((_DWORD *)this + 5) - *((_DWORD *)this + 3);
  if ( v6 < 0 )
    v6 = 0;
  v7 = RoundToNearestInt((float)v6 * *((float *)a2 + 6));
  v12 = v5;
  v8 = *((_DWORD *)this + 4) - v5;
  v13 = v7;
  v14.x = *((_DWORD *)this + 17) + (*((_DWORD *)this + 2) + v8) / 2;
  v9 = *((_DWORD *)this + 18) + (*((_DWORD *)this + 3) + *((_DWORD *)this + 5) - v7) / 2;
  v10 = (struct tagPOINT *)((char *)this - 264);
  v14.y = v9;
  (*(void (__fastcall **)(struct tagPOINT *, int *))(*(_QWORD *)v10 + 80LL))(v10, &v12);
  CVisual::SetOffset(v10, &v14);
  (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 4096LL);
  return 0LL;
}
