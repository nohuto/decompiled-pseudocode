/*
 * XREFs of ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x18014C100
 * Callers:
 *     ?SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x18014BE50 (-SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CGradientColorData::SetColors(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  char *v4; // r14
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // ecx
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r8d
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ebx
  int v21; // eax
  int v22; // r15d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  __int64 v28; // rax
  unsigned int v29; // r8d
  int v30; // ebx
  int v31; // eax
  float v33; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *((_DWORD *)this + 6) = 0;
  v4 = (char *)this + 32;
  *((_DWORD *)this + 14) = 0;
  if ( !a3 )
    return v3;
  v7 = *((unsigned int *)this + 6);
  v8 = a3 - 1;
  if ( a3 == 1 )
  {
    v9 = v7 + 1;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x36u);
LABEL_53:
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)v4 + 6) = 0;
      return v3;
    }
    if ( v9 > *((_DWORD *)this + 5) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, a2);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      v3 = v10;
      if ( v10 < 0 )
        goto LABEL_12;
    }
    else
    {
      *(struct _D3DCOLORVALUE *)(*(_QWORD *)this + 16 * v7) = *(const struct _D3DCOLORVALUE *)&a2->r;
      *((_DWORD *)this + 6) = v9;
    }
    v11 = *((unsigned int *)this + 6);
    v12 = v11 + 1;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_20:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x37u);
      goto LABEL_53;
    }
    if ( v12 > *((_DWORD *)this + 5) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, a2);
      v13 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      v3 = v13;
      if ( v13 < 0 )
        goto LABEL_20;
    }
    else
    {
      *(struct _D3DCOLORVALUE *)(*(_QWORD *)this + 16 * v11) = *(const struct _D3DCOLORVALUE *)&a2->r;
      *((_DWORD *)this + 6) = v12;
    }
    goto LABEL_15;
  }
  v19 = v7 + a3;
  if ( (unsigned int)v7 + a3 < (unsigned int)v7 )
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x3Bu);
    goto LABEL_53;
  }
  if ( v19 > *((_DWORD *)this + 5) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, a3, a2);
    v20 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
    v3 = v20;
    if ( v20 < 0 )
      goto LABEL_28;
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)this + 16 * v7), a2, 16LL * a3);
    *((_DWORD *)this + 6) = v19;
  }
LABEL_15:
  v15 = *((unsigned int *)v4 + 6);
  v33 = 0.0;
  v16 = v15 + 1;
  if ( (int)v15 + 1 < (unsigned int)v15 )
  {
    v17 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x46u);
    goto LABEL_53;
  }
  if ( v16 > *((_DWORD *)v4 + 5) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 4u, 1, &v33);
    v17 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    v3 = v17;
    if ( v17 < 0 )
      goto LABEL_38;
  }
  else
  {
    *(float *)(*(_QWORD *)v4 + 4 * v15) = v33;
    *((_DWORD *)v4 + 6) = v16;
  }
  v22 = 1;
  if ( v8 > 1 )
  {
    while ( 1 )
    {
      v23 = *((_DWORD *)v4 + 6);
      v24 = v23 + 1;
      v33 = (float)v22 / (float)(int)v8;
      if ( v23 + 1 < v23 )
        break;
      if ( v24 > *((_DWORD *)v4 + 5) )
      {
        v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 4u, 1, &v33);
        v27 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
        v3 = v27;
        if ( v27 < 0 )
          goto LABEL_46;
      }
      else
      {
        *(float *)(*(_QWORD *)v4 + 4LL * v23) = v33;
        *((_DWORD *)v4 + 6) = v24;
      }
      if ( ++v22 >= v8 )
        goto LABEL_43;
    }
    v27 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_46:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x4Bu);
    goto LABEL_53;
  }
LABEL_43:
  v28 = *((unsigned int *)v4 + 6);
  v33 = FLOAT_1_0;
  v29 = v28 + 1;
  if ( (int)v28 + 1 < (unsigned int)v28 )
  {
    v30 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_52:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x52u);
    goto LABEL_53;
  }
  v3 = 0;
  if ( v29 > *((_DWORD *)v4 + 5) )
  {
    v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 4u, 1, &v33);
    v30 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
    v3 = v30;
    if ( v30 < 0 )
      goto LABEL_52;
  }
  else
  {
    *(float *)(*(_QWORD *)v4 + 4 * v28) = v33;
    *((_DWORD *)v4 + 6) = v29;
  }
  return v3;
}
