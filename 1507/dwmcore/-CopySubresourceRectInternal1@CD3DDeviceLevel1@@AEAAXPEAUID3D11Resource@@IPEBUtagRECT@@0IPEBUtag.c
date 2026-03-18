/*
 * XREFs of ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x180018FE8
 * Callers:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800190F8 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180133F30 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xxdddddd @ 0x180134DAC (Template_xxdddddd.c)
 */

void __fastcall CD3DDeviceLevel1::CopySubresourceRectInternal1(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        const struct tagRECT *a4,
        struct ID3D11Resource *a5,
        unsigned int a6,
        const struct tagPOINT *a7,
        unsigned int a8)
{
  _DWORD *v8; // r14
  int v9; // r12d
  LONG left; // eax
  unsigned int x; // ebp
  LONG y; // r15d
  int v13; // edx
  int v14; // ecx
  _DWORD v15[6]; // [rsp+58h] [rbp-70h] BYREF

  v8 = 0LL;
  v9 = (int)a2;
  if ( a4 )
  {
    left = a4->left;
    v15[2] = 0;
    v8 = v15;
    v15[0] = left;
    v15[1] = a4->top;
    v15[3] = a4->right;
    v15[4] = a4->bottom;
    v15[5] = 1;
  }
  x = 0;
  y = 0;
  if ( a7 )
  {
    x = a7->x;
    y = a7->y;
  }
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, _QWORD, LONG, _DWORD, struct ID3D11Resource *, int, _DWORD *, unsigned int))(**((_QWORD **)this + 69) + 920LL))(
    *((_QWORD *)this + 69),
    a5,
    a6,
    x,
    y,
    0,
    a2,
    a3,
    v8,
    a8);
  if ( (a8 & 4) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xxdddddd(v14, v13, v9, (_DWORD)a5, *v8, v8[1], v8[3], v8[4], x, y);
}
