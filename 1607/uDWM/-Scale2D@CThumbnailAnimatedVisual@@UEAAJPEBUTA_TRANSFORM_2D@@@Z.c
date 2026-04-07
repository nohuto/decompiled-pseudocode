/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180098610
 * Callers:
 *     <none>
 * Callees:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(struct tagPOINT *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  struct tagPOINT v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = this[2].x - this[1].x;
  if ( v2 < 0 )
    v2 = 0;
  v5 = RoundToNearestInt((float)v2 * *((float *)a2 + 5));
  v6 = this[2].y - this[1].y;
  if ( v6 < 0 )
    v6 = 0;
  v7 = RoundToNearestInt((float)v6 * *((float *)a2 + 6));
  v10 = v5;
  v8 = this[2].x - v5;
  v11 = v7;
  v12.x = this[8].y + (this[1].x + v8) / 2;
  v12.y = this[9].x + (this[1].y + this[2].y - v7) / 2;
  (*(void (__fastcall **)(struct tagPOINT *, int *))(*(_QWORD *)&this[-33] + 80LL))(this - 33, &v10);
  CVisual::SetOffset(this - 33, &v12);
  (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)&this[-33] + 24LL))(this - 33, 4096LL);
  return 0LL;
}
