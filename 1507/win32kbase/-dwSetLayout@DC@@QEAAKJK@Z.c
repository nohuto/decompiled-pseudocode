/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003CB30
 * Callers:
 *     GreSetLayout @ 0x1C0012430 (GreSetLayout.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0067300 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::dwSetLayout(DC *this, int a2, int a3)
{
  __int64 v3; // r9
  DC *v4; // r10
  unsigned int v5; // r11d
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+10h]
  __int64 v13; // [rsp+30h] [rbp+10h]
  __int64 v14; // [rsp+48h] [rbp+28h]

  v3 = *((_QWORD *)this + 10);
  v4 = this;
  v5 = *(_DWORD *)(v3 + 312);
  *(_DWORD *)(v3 + 312) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v5) & 7) != 0 )
  {
    v7 = *((_QWORD *)this + 10);
    v12 = *(_QWORD *)(v7 + 328);
    v14 = *(_QWORD *)(v7 + 336);
    if ( (a3 & 1) != 0 )
      *(_DWORD *)(v7 + 308) = 8;
    LODWORD(v12) = -(int)v12;
    LODWORD(v14) = -(int)v14;
    *(_QWORD *)(*((_QWORD *)v4 + 10) + 328LL) = v12;
    *(_QWORD *)(*((_QWORD *)v4 + 10) + 336LL) = v14;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v4);
    }
    else
    {
      v11 = *((_QWORD *)v4 + 10);
      HIDWORD(v13) = HIDWORD(*(_QWORD *)(v11 + 320));
      LODWORD(v13) = a2 - *(_QWORD *)(v11 + 320);
      *(_QWORD *)(v11 + 320) = v13;
    }
    v8 = *((_QWORD *)v4 + 10);
    if ( (*(_BYTE *)(v8 + 152) & 6) != 6 )
      *(_DWORD *)(v8 + 152) ^= 2u;
    v9 = *((_DWORD *)v4 + 44);
    if ( (v9 & 4) != 0 )
      v10 = v9 & 0xFFFFFFFB;
    else
      v10 = v9 | 4;
    *((_DWORD *)v4 + 44) = v10;
    *(_DWORD *)(*((_QWORD *)v4 + 10) + 352LL) |= 0x4090u;
  }
  return v5;
}
