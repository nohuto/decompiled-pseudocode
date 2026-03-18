/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028728C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ulCharsetToCodePage @ 0x1C0148FB4 (ulCharsetToCodePage.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C01C1568 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0287220 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028724C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  bool v1; // zf
  struct PFF *v3; // rax
  _QWORD *v4; // rcx
  _DWORD *v5; // rax
  struct PFE *i; // rax
  struct PFE *v7; // rdi
  int v8; // eax
  _DWORD *v9; // r10
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  unsigned __int8 v12; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v13; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v12 = 1;
  if ( !v1 )
  {
    v13 = gpPFTDevice;
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v13, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v4 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v5 = (_DWORD *)*((_QWORD *)this + 29);
        v10[0] = v4;
        v11 = 0LL;
        *v5 = 0;
        *((_QWORD *)this + 25) = 0LL;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) = 0;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v10[1] = *v4;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v10); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v10) )
        {
          v7 = i;
          if ( !i )
            break;
          v13 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v13, &v12, 0) )
          {
            if ( !*((_DWORD *)this + 46) )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v7 + 4) + *(int *)(*((_QWORD *)v7 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v7, 1, v12);
                return;
              }
              ++*((_DWORD *)this + 46);
            }
            if ( *((_DWORD *)this + 46) < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v7, 1, v12);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
        {
          v8 = ulCharsetToCodePage(HIBYTE(**((_DWORD **)this + 29)));
          *v9 |= v8 << 8;
        }
      }
    }
  }
}
