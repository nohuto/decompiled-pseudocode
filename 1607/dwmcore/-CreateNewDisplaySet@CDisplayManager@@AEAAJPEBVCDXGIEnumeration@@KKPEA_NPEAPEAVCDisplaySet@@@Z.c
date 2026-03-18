/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 * Callees:
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180035E04 (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x180035F0C (-ComputeDisplayBounds@CDisplaySet@@AEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180035F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180036330 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800A834C (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::CreateNewDisplaySet(
        CDisplayManager *this,
        const struct CDXGIEnumeration *a2,
        int a3,
        int a4,
        bool *a5,
        struct CDisplaySet **a6)
{
  bool *v6; // r15
  _QWORD *v7; // rdi
  LONG DisplayConfigBufferSizes; // eax
  unsigned __int64 v12; // rcx
  signed int v13; // ebx
  _QWORD *v14; // rax
  void *v15; // rcx
  char *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v23[5]; // [rsp+30h] [rbp-28h] BYREF
  CDisplayManager *v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = this;
  v6 = a5;
  v7 = 0LL;
  *a5 = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, (UINT32 *)v23, (UINT32 *)&a5);
  v13 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes <= 0 )
  {
    LODWORD(v24) = DisplayConfigBufferSizes;
  }
  else
  {
    v13 = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
    LODWORD(v24) = v13;
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B8F00, 2u, v13, 0x2EFu);
  }
  else
  {
    v14 = CDisplaySet::operator new(v12, LODWORD(v23[0]), (unsigned int)a5);
    v7 = v14;
    if ( v14 )
    {
      v14[2] = 0LL;
      v15 = v14 + 15;
      *((_DWORD *)v14 + 10) = 0;
      *(_DWORD *)v14 = 1;
      *((_DWORD *)v14 + 1) = a3;
      *((_DWORD *)v14 + 2) = a4;
      v16 = (char *)(v14 + 10);
      *((_DWORD *)v7 + 18) = 0;
      v7[6] = v16;
      v7[7] = v16;
      *((_DWORD *)v7 + 16) = 4;
      *((_DWORD *)v7 + 17) = 4;
      v7[66] = 0LL;
      v7[67] = 0LL;
      *((_BYTE *)v7 + 112) = 0;
      *((_DWORD *)v7 + 9) = 0;
      *((_DWORD *)v7 + 8) = 0;
      *((_DWORD *)v7 + 7) = 0;
      *((_DWORD *)v7 + 6) = 0;
      memset_0(v15, 0, 0x68uLL);
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v13 = -2147024882;
      LODWORD(v24) = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801B8F00, 2u, -2147024882, 0x2F5u);
      goto LABEL_18;
    }
    v7[2] = a2;
    if ( a2 )
      (**(void (__fastcall ***)(const struct CDXGIEnumeration *))a2)(a2);
    v17 = CDisplaySet::EnumerateOutputs((CDisplaySet *)v7);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v17, 0xB4u);
    }
    else
    {
      v18 = CDisplaySet::ArrangeCloneDisplays((CDisplaySet *)v7);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v18, 0xB6u);
      }
      else
      {
        CDisplaySet::ComputeDisplayBounds((CDisplaySet *)v7);
        v19 = CDisplaySet::CheckForDriverUpdating((CDisplaySet *)v7);
        v13 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v19, 0xBAu);
      }
    }
    LODWORD(v24) = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B8F00, 2u, v13, 0x300u);
    }
    else
    {
      *a6 = (struct CDisplaySet *)v7;
      v7 = 0LL;
    }
  }
  if ( v13 < 0 )
  {
    if ( !v7 )
      goto LABEL_18;
    *v6 = *((_BYTE *)v7 + 112);
  }
  if ( v7 )
    CDisplaySet::Release((CDisplaySet *)v7, v20, v21);
LABEL_18:
  TranslateDXGIorD3DErrorInContext((unsigned int)v13, 4LL, &v24);
  return (unsigned int)v24;
}
