/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003B090
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003B810 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800686B8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800A7850 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, _QWORD *a3)
{
  int v5; // r15d
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  unsigned int v9; // r12d
  _DWORD *v10; // rdi
  unsigned int v11; // r13d
  _DWORD *v12; // rbx
  CConnectorProcessingModeCharacteristics *v13; // rax
  CConnectorFormatCharacteristics **v14; // rdx
  CConnectorProcessingModeCharacteristics *v15; // rsi
  int v16; // r13d
  CConnectorFormatCharacteristics *v17; // rax
  CConnectorFormatCharacteristics *v18; // rbx
  __int64 v19; // rbp
  void *v20; // rax
  void *v21; // r14
  int v22; // ecx
  int v23; // eax
  int v24; // ebp
  void *v25; // rax
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  bool v29; // sf
  int v30; // ebx
  void *v31; // rax
  CConnectorProcessingModeCharacteristics **v32; // rdx
  int v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+24h] [rbp-74h]
  int v36; // [rsp+28h] [rbp-70h]
  _QWORD *v37; // [rsp+30h] [rbp-68h]
  _DWORD *v38; // [rsp+38h] [rbp-60h]
  __int128 v40; // [rsp+48h] [rbp-50h]
  int v41; // [rsp+A0h] [rbp+8h]
  unsigned int v43; // [rsp+B8h] [rbp+20h]

  v5 = -2147023728;
  if ( a1 < 8 || *a2 != 4 )
    return (unsigned int)v5;
  v7 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v37 = v7;
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
  }
  else
  {
    v8 = 0LL;
    v37 = 0LL;
  }
  if ( !v8 )
  {
LABEL_44:
    v5 = -2147024882;
    goto LABEL_54;
  }
  v9 = a1 - 8;
  v43 = 0;
  v10 = a2 + 2;
  v11 = 0;
  if ( !a2[1] )
  {
LABEL_39:
    *a3 = v8;
    return (unsigned int)v5;
  }
  while ( 1 )
  {
    v12 = v10;
    v38 = v10;
    if ( v9 < 0x14 )
    {
      v5 = -2147023728;
      goto LABEL_54;
    }
    v40 = *(_OWORD *)v10;
    v13 = (CConnectorProcessingModeCharacteristics *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v13;
    if ( !v13 )
      goto LABEL_44;
    v9 -= 20;
    v41 = 0;
    v10 += 5;
    *(_OWORD *)v13 = v40;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    if ( v12[4] )
      break;
LABEL_30:
    v27 = *((_DWORD *)v8 + 2);
    v28 = *((_DWORD *)v8 + 3);
    if ( v27 == v28 )
    {
      if ( v28 )
      {
        v29 = (v27 & 0x40000000) != 0;
        v30 = 2 * v27;
        if ( v29 )
          goto LABEL_52;
      }
      else
      {
        v30 = 1;
      }
      LODWORD(v14) = v30;
      if ( (unsigned __int64)v30 > 0xFFFFFFF || (v31 = _recalloc((void *)*v8, v30, 8uLL)) == 0LL )
      {
LABEL_52:
        v5 = -2147024882;
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v15, (unsigned int)v14);
        goto LABEL_54;
      }
      *((_DWORD *)v8 + 3) = v30;
      *v8 = v31;
    }
    v32 = (CConnectorProcessingModeCharacteristics **)(*v8 + 8LL * *((int *)v8 + 2));
    if ( v32 )
      *v32 = v15;
    ++v11;
    ++*((_DWORD *)v8 + 2);
    v43 = v11;
    if ( v11 >= a2[1] )
      goto LABEL_39;
  }
  while ( v9 >= 0x22 && v9 >= (unsigned __int64)*((unsigned __int16 *)v10 + 16) + 34 )
  {
    v16 = v10[3];
    v36 = v10[2];
    v35 = *v10;
    v34 = v10[1];
    v17 = (CConnectorFormatCharacteristics *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
      *(_QWORD *)v17 = 0LL;
    else
      v18 = 0LL;
    if ( !v18 )
      goto LABEL_47;
    v19 = *((unsigned __int16 *)v10 + 16);
    v20 = CoTaskMemAlloc(v19 + 18);
    v21 = v20;
    if ( v20 )
    {
      memcpy_0(v20, v10 + 4, v19 + 18);
      v5 = 0;
    }
    else
    {
      v5 = -2147024882;
    }
    *(_QWORD *)v18 = v21;
    if ( v5 >= 0 )
    {
      *((_DWORD *)v18 + 3) = v34;
      *((_DWORD *)v18 + 2) = v35;
      *((_DWORD *)v18 + 4) = v36;
      *((_DWORD *)v18 + 5) = v16;
      v22 = *((_DWORD *)v15 + 6);
      v23 = *((_DWORD *)v15 + 7);
      if ( v22 != v23 )
        goto LABEL_24;
      if ( v23 )
      {
        v24 = 2 * v22;
        if ( (v22 & 0x40000000) == 0 )
          goto LABEL_21;
      }
      else
      {
        v24 = 1;
LABEL_21:
        LODWORD(v14) = v24;
        if ( (unsigned __int64)v24 <= 0xFFFFFFF )
        {
          v25 = _recalloc(*((void **)v15 + 2), v24, 8uLL);
          if ( v25 )
          {
            *((_DWORD *)v15 + 7) = v24;
            *((_QWORD *)v15 + 2) = v25;
LABEL_24:
            v14 = (CConnectorFormatCharacteristics **)(*((_QWORD *)v15 + 2) + 8LL * *((int *)v15 + 6));
            if ( v14 )
              *v14 = v18;
            ++*((_DWORD *)v15 + 6);
            goto LABEL_27;
          }
        }
      }
LABEL_47:
      v5 = -2147024882;
    }
    if ( v18 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(v18, (unsigned int)v14);
LABEL_27:
    if ( v5 < 0 )
      goto LABEL_51;
    v26 = *((unsigned __int16 *)v10 + 16);
    v9 += -34 - v26;
    v10 = (_DWORD *)((char *)v10 + v26 + 34);
    if ( (unsigned int)++v41 >= v38[4] )
    {
      v8 = v37;
      v11 = v43;
      goto LABEL_30;
    }
  }
  v5 = -2147023728;
LABEL_51:
  CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v15, (unsigned int)v14);
  v8 = v37;
LABEL_54:
  if ( v8 )
  {
    if ( *v8 )
    {
      free((void *)*v8);
      *v8 = 0LL;
    }
    v8[1] = 0LL;
    operator delete(v8);
  }
  return (unsigned int)v5;
}
