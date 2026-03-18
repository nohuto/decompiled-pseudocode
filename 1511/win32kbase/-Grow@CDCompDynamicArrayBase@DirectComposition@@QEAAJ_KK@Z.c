/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E328
 * Callers:
 *     ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C00160F0 (-Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z.c)
 *     ?InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DF84 (-InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D78C8 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00D7F70 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z @ 0x1C00D9300 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9C50 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  int v8; // edi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // kr00_8

  v3 = *((_QWORD *)this + 4);
  v6 = v3 + a2;
  if ( v3 + a2 < v3 )
    return (unsigned int)-1073741801;
  v7 = *((_QWORD *)this + 3);
  v8 = 0;
  if ( v6 > v7 )
  {
    if ( !v7 )
      v7 = 64LL;
    while ( v7 < v6 && v7 < 0x400 )
    {
      v15 = v7;
      v7 *= 2LL;
      if ( !is_mul_ok(v15, 2uLL) )
      {
        v7 = -1LL;
        v8 = -1073741675;
        break;
      }
      v8 = 0;
    }
    if ( v8 >= 0 )
    {
      while ( v7 < v6 )
      {
        if ( v7 + 1024 < v7 )
        {
          v7 = -1LL;
          v8 = -1073741675;
          break;
        }
        v7 += 1024LL;
        v8 = 0;
      }
      if ( v8 >= 0 )
      {
        v10 = v7 * *((_QWORD *)this + 5);
        if ( is_mul_ok(v7, *((_QWORD *)this + 5)) )
        {
          v8 = 0;
          if ( *((_BYTE *)this + 16) )
            v11 = Win32AllocPoolWithQuota(v10, a3);
          else
            v11 = Win32AllocPool(v10, a3);
          v12 = (char *)v11;
          if ( !v11 )
            v8 = -1073741801;
          if ( v8 >= 0 )
          {
            v13 = *((_QWORD *)this + 4);
            if ( v13 )
              memmove(v12, *((const void **)this + 1), v13 * *((_QWORD *)this + 5));
            memset(
              &v12[*((_QWORD *)this + 4) * *((_QWORD *)this + 5)],
              0,
              *((_QWORD *)this + 5) * (v7 - *((_QWORD *)this + 4)));
            v14 = *((_QWORD *)this + 1);
            if ( v14 )
              Win32FreePool(v14);
            *((_QWORD *)this + 1) = v12;
            *((_QWORD *)this + 3) = v7;
            goto LABEL_3;
          }
        }
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_3:
  *((_QWORD *)this + 4) += a2;
  return (unsigned int)v8;
}
