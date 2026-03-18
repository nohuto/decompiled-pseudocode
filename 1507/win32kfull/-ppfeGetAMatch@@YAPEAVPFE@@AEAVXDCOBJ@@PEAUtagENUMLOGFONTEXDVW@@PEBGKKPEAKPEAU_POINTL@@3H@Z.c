/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0029920 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0027BC8 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z @ 0x1C0027C60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0028E7C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0028FC8 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286EC4 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0287220 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028728C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028742C (-vEmergency@MAPPER@@QEAAXXZ.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *Src,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        int a9)
{
  unsigned int v10; // eax
  struct _FONTHASH **v11; // rbx
  struct PFE *result; // rax
  unsigned int v13; // eax
  struct PFF *v14; // rax
  struct PFF *v15; // rbx
  _QWORD *v16; // rdi
  unsigned int v17; // [rsp+38h] [rbp-C8h]
  struct PFT *v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-98h]
  _BYTE v21[180]; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+134h] [rbp+34h]
  struct PFE *v23; // [rsp+148h] [rbp+48h]
  int v24; // [rsp+150h] [rbp+50h]
  _DWORD *v25; // [rsp+158h] [rbp+58h]
  _DWORD *v26; // [rsp+160h] [rbp+60h]
  _DWORD *v27; // [rsp+168h] [rbp+68h]
  unsigned int v28; // [rsp+17Ch] [rbp+7Ch]

  MAPPER::MAPPER((MAPPER *)v21, a1, a6, a7, a8, a2, Src, v17, a9, a5);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 264LL) & 4) != 0 )
  {
    v18 = *(struct PFT **)(*(_QWORD *)a1 + 268LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v21, (struct _UNIVERSAL_FONT_ID *)&v18) )
      return v23;
  }
  if ( gpPFTPrivate )
  {
    if ( *((_DWORD *)gpPFTPrivate + 7) )
    {
      v28 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, gpPFTPrivate)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, gpPFTPrivate + 1) )
      {
        return v23;
      }
    }
  }
  v18 = gpPFTDevice;
  v10 = v28;
  if ( (v28 & 0x200) != 0 )
  {
    v28 |= 0x80u;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v18, *(HDEV *)(*(_QWORD *)a1 + 48LL), 0LL);
    v15 = v14;
    if ( v14 )
    {
      v16 = (_QWORD *)((char *)v14 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, (struct _FONTHASH **)v14 + 14)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, (struct _FONTHASH **)v15 + 13) )
      {
        return v23;
      }
      v10 = v28;
      if ( (v28 & 0x20000000) != 0 )
      {
        result = v23;
        if ( !v23 || *(struct PFF **)v23 != v15 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v19[1] = *v16;
          v19[0] = v16;
          v20 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v19);
        }
        return result;
      }
    }
    else
    {
      v10 = v28;
    }
  }
  v11 = gpPFTPublic;
  v28 = v10 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, gpPFTPublic)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, v11 + 1) )
  {
    return v23;
  }
  result = v23;
  if ( !v23 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v21, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v13 = v28;
        if ( (v28 & 0x200) == 0 )
        {
LABEL_11:
          if ( (v13 & 0x20000) != 0 )
          {
LABEL_34:
            v28 = v13 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v21);
            return v23;
          }
          MAPPER::bGetFaceName((MAPPER *)v21);
          *v27 = 0;
          v23 = 0LL;
          v24 = -1;
          *v25 = 0;
          *v26 = 1;
          v26[1] = 1;
          v28 &= ~0x80u;
          v22 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, v11)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v21, v11 + 1) )
          {
            return v23;
          }
          result = v23;
          if ( !v23 )
          {
            v13 = v28;
            goto LABEL_34;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v21);
        result = v23;
        if ( v23 )
          return result;
      }
      v13 = v28;
      goto LABEL_11;
    }
  }
  return result;
}
