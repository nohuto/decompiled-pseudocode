/*
 * XREFs of ?AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DEE40
 * Callers:
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDF38 (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CMegaRectCollection::AppendMegaRectEntry(CMegaRectCollection *this, struct CHWDrawListEntry *a2)
{
  __int128 v4; // xmm0
  CMILRefCountBase *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // edi
  _OWORD *v12; // rcx
  int v14; // eax
  CMILRefCountBase *v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int128 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-90h]
  _OWORD v20[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+100h] [rbp+0h]

  *(_QWORD *)&v20[0] = 0LL;
  memset_0((char *)v20 + 8, 0, 0x80uLL);
  v4 = *(_OWORD *)((char *)a2 + 76);
  v5 = (CMILRefCountBase *)*((_QWORD *)a2 + 2);
  v6 = *(_OWORD *)((char *)a2 + 92);
  v15[0] = a2;
  v16 = v4;
  v7 = *(_OWORD *)((char *)a2 + 108);
  v15[1] = v5;
  v17 = v6;
  v8 = *(_OWORD *)((char *)a2 + 124);
  v18 = v7;
  v19 = v8;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  (**(void (__fastcall ***)(CMILRefCountBase *))v5)(v5);
  v9 = *((unsigned int *)this + 6);
  v10 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
  {
    v11 = 0;
    if ( v10 > *((_DWORD *)this + 5) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0xD8u, 1, v15);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        goto LABEL_13;
      }
    }
    else
    {
      v12 = (_OWORD *)(*(_QWORD *)this + 216 * v9);
      *v12 = *(_OWORD *)v15;
      v12[1] = v16;
      v12[2] = v17;
      v12[3] = v18;
      v12[4] = v19;
      v12[5] = v20[0];
      v12[6] = v20[1];
      v12 += 8;
      *(v12 - 1) = v20[2];
      *v12 = v20[3];
      v12[1] = v20[4];
      v12[2] = v20[5];
      v12[3] = v20[6];
      v12[4] = v20[7];
      *((_QWORD *)v12 + 10) = v21;
      *((_DWORD *)this + 6) = v10;
    }
    *(_OWORD *)v15 = 0LL;
    goto LABEL_6;
  }
  v11 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_13:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x135u);
LABEL_6:
  if ( v15[0] )
    CMILRefCountBase::Release(v15[0]);
  if ( v15[1] )
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v15[1] + 8LL))(v15[1]);
  return v11;
}
