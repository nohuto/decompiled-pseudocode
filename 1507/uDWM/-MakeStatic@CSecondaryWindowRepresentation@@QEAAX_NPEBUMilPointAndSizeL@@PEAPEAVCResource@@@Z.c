/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x180074AB8
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007AAF8 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18007AB4C (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CResource **a4)
{
  __int64 v4; // r11
  LONG v9; // edx
  LONG v10; // r8d
  LONG v11; // ecx
  CWindowSnapshot *v12; // r10
  LONG v13; // ecx
  CWindowSnapshot *v14; // r10
  const struct tagRECT *v15; // r11
  CBaseObject *v16; // rcx
  volatile signed __int32 *v17; // rbx
  struct CResource *v18; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v19; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-20h]

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v9 = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v18 = 0LL;
    v12 = *(CWindowSnapshot **)(v4 + 384);
    v19.right = v9 + v11;
    v13 = v10 + a3[3];
    v19.left = v9;
    v19.top = v10;
    v19.bottom = v13;
    if ( a2
      && v12
      && CWindowSnapshot::HasCVIOfCompatibleSize(v12, &v19)
      && (int)CWindowSnapshot::GetCVI(v14, v15 + 3, &v18, (float *)this + 126) >= 0 )
    {
      v16 = *a4;
      v20[1] = 0;
      v20[0] = 154;
      v21 = v19;
      if ( v16 )
        CBaseObject::Release(v16);
      v17 = (volatile signed __int32 *)v18;
      *a4 = v18;
      if ( v17 )
      {
        _InterlockedIncrement(v17 + 2);
        v17 = (volatile signed __int32 *)v18;
      }
      CResource::Send((CResource *)v17, v20, 0x18u);
      CBaseObject::Release((CBaseObject *)v17);
      *((_BYTE *)this + 160) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}
