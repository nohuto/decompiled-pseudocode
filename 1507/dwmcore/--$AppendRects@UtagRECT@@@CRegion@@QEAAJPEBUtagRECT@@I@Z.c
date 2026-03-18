/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18008771C
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180087914 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180087E9C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRegion::AppendRects<tagRECT>(FastRegion::CRegion *a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // rsi
  unsigned int v4; // ebx
  unsigned int v7; // r12d
  int *v8; // rcx
  int v9; // r9d
  __int64 v10; // kr00_8
  __int64 v11; // rax
  int v12; // r14d
  __int64 v14; // rdi
  _QWORD v16[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v17; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v18[18]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[80]; // [rsp+B8h] [rbp-50h] BYREF

  v18[0] = 0;
  v3 = v18;
  v4 = 0;
  v17 = v18;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = v4 + 5;
      if ( a3 < v4 + 5 )
        v7 = a3;
      v8 = (int *)(a2 + 16LL * v4);
      v9 = *v8;
      v10 = *((_QWORD *)v8 + 1);
      v11 = HIDWORD(*(_QWORD *)v8);
      if ( *v8 >= (int)v10 || (int)v11 >= SHIDWORD(v10) )
      {
        *v3 = 0;
      }
      else
      {
        *v3 = 2;
        v3[1] = v9;
        v3[2] = v10;
        v3[3] = v11;
        v3[4] = 16;
        v3[7] = v9;
        v3[8] = v10;
        v3[5] = HIDWORD(v10);
        v3[6] = 16;
      }
      if ( ++v4 < v7 )
        break;
LABEL_8:
      v12 = FastRegion::CRegion::Union(a1, (const struct CRegion *)&v17);
      if ( v12 < 0 )
        goto LABEL_18;
      v3 = v17;
      if ( v4 >= a3 )
        goto LABEL_10;
    }
    v14 = 16LL * v4 + a2 + 8;
    while ( 1 )
    {
      *(_OWORD *)&v16[1] = *(_OWORD *)(v14 - 8);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v19, (const struct tagRECT *)&v16[1]);
      v12 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v17, (const struct CRegion *)v19);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
      if ( v12 < 0 )
        break;
      ++v4;
      v14 += 16LL;
      if ( v4 >= v7 )
        goto LABEL_8;
    }
LABEL_18:
    v3 = v17;
  }
  else
  {
LABEL_10:
    v12 = 0;
  }
  if ( v18 != v3 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
  return (unsigned int)v12;
}
