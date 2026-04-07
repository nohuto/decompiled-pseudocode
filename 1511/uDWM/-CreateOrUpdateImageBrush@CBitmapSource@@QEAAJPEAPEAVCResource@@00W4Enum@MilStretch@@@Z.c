/*
 * XREFs of ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180073CFC
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18003C750 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18001CBC8 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CBitmapSource::CreateOrUpdateImageBrush(
        CBitmapSource *a1,
        CBaseObject **a2,
        CBaseObject **a3,
        CBaseObject **a4,
        int a5)
{
  CBaseObject *v5; // rax
  CBaseObject *v6; // rdi
  CBaseObject *v7; // rbx
  int v12; // eax
  unsigned int v13; // esi
  CBaseObject *v14; // rdi
  int v15; // eax
  CBaseObject *v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  float *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  CResource *v26; // rcx
  CBaseObject *v28; // [rsp+30h] [rbp-A1h] BYREF
  CBaseObject *v29; // [rsp+38h] [rbp-99h] BYREF
  CResource *v30; // [rsp+40h] [rbp-91h] BYREF
  int v31; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v32[4]; // [rsp+54h] [rbp-7Dh] BYREF
  double v33; // [rsp+58h] [rbp-79h]
  __int128 v34; // [rsp+60h] [rbp-71h]
  _OWORD v35[2]; // [rsp+70h] [rbp-61h] BYREF
  int v36; // [rsp+90h] [rbp-41h]
  int v37; // [rsp+94h] [rbp-3Dh]
  int v38; // [rsp+98h] [rbp-39h]
  int v39; // [rsp+9Ch] [rbp-35h]
  int v40; // [rsp+A0h] [rbp-31h]
  int v41; // [rsp+A4h] [rbp-2Dh]
  int v42; // [rsp+ACh] [rbp-25h]
  int v43; // [rsp+B0h] [rbp-21h]
  int v44; // [rsp+B4h] [rbp-1Dh]
  int v45; // [rsp+B8h] [rbp-19h]
  int v46; // [rsp+C0h] [rbp-11h]

  v5 = *a2;
  v6 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v6 = v29;
    v7 = v28;
  }
  if ( !v30 )
  {
    v12 = CResource::Create(0x4Bu, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v30);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x27Bu);
      goto LABEL_46;
    }
  }
  if ( a3 )
  {
    v14 = *a3;
    v29 = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v6 = v29;
      v7 = v28;
    }
    else
    {
      v15 = CResource::Create(0x31u, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v29);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x284u);
LABEL_45:
        v6 = v29;
        goto LABEL_46;
      }
      v6 = v29;
    }
  }
  if ( a4 )
  {
    v16 = *a4;
    v28 = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
      v7 = v28;
      v6 = v29;
    }
    else
    {
      v17 = CResource::Create(0x2Du, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v28);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x28Eu);
        v7 = v28;
        goto LABEL_46;
      }
      v7 = v28;
    }
  }
  v31 = 257;
  memset_0(v32, 0, 0x70uLL);
  v33 = DOUBLE_1_0;
  if ( v7 )
    v18 = *((_DWORD *)v7 + 6);
  else
    v18 = 0;
  v37 = 0;
  v38 = 0;
  v36 = v18;
  if ( v6 )
  {
    v19 = *((_DWORD *)v6 + 6);
    v39 = 0;
    v34 = 0uLL;
    v41 = v19;
  }
  else
  {
    v34 = _xmm;
    v39 = 1;
  }
  if ( (unsigned __int8)CBitmapSource::HasSourceClip(a1) )
  {
    v40 = 0;
    v21 = v20 - (_QWORD)v35;
    v22 = (float *)v35;
    v23 = 4LL;
    do
    {
      *v22 = (float)*(int *)((char *)v22 + v21 + 80);
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  else
  {
    v35[0] = _xmm;
    v40 = 1;
  }
  v43 = 0;
  v42 = a5;
  v24 = *((_QWORD *)a1 + 2);
  v44 = 1;
  v45 = 1;
  v46 = *(_DWORD *)(v24 + 24);
  v25 = CResource::Send(v30, &v31, 0x74u);
  v13 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x2C9u);
    goto LABEL_46;
  }
  if ( *a2 )
    CBaseObject::Release(*a2);
  v26 = v30;
  *a2 = v30;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
    v6 = v29;
    v7 = v28;
  }
  if ( a3 )
  {
    if ( *a3 )
      CBaseObject::Release(*a3);
    *a3 = v6;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v6 = v29;
      v7 = v28;
    }
  }
  if ( a4 )
  {
    if ( *a4 )
      CBaseObject::Release(*a4);
    *a4 = v7;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      v7 = v28;
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( v30 )
    CBaseObject::Release(v30);
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v7 )
    CBaseObject::Release(v7);
  return v13;
}
