/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0043A20
 * Callers:
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00EB010 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00F1990 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C0042B08 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_N.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  struct DirectComposition::CResourceMarshaler **v6; // rsi
  int v7; // ebp
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  char v14; // al
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  char v18; // al
  int v19; // ecx
  char v20; // al
  int v21; // ecx
  char v22; // al
  int v23; // ecx
  char v24; // al

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                24LL);
        v15 = 0;
        if ( !v14 )
          v15 = -1073741811;
        v5 = v15;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
      v7 = 256;
      goto LABEL_13;
    case 4:
      goto LABEL_11;
    case 5:
      if ( a4 )
      {
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                7LL);
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v5 = v19;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
      v7 = 1024;
      goto LABEL_13;
    case 6:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                66LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v5 = v17;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 128);
      v7 = 4096;
      goto LABEL_13;
  }
  if ( a3 != 10 )
  {
    if ( a3 == 20 )
    {
      if ( a4 )
      {
        v20 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                102LL);
        v21 = 0;
        if ( !v20 )
          v21 = -1073741811;
        v5 = v21;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 184);
      v7 = 0x80000;
      goto LABEL_13;
    }
    if ( a3 != 33 )
    {
      if ( a3 != 34 )
        return (unsigned int)-1073741811;
      if ( a4 )
      {
        v22 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                81LL);
        v23 = 0;
        if ( !v22 )
          v23 = -1073741811;
        v5 = v23;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
      v7 = 0x1000000;
LABEL_13:
      if ( v5 < 0 || a3 == 4 || a3 == 33 )
        return (unsigned int)v5;
      goto LABEL_16;
    }
LABEL_11:
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            32LL) )
    {
      return (unsigned int)-1073741811;
    }
    v5 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 33, a5);
    goto LABEL_13;
  }
  if ( a4 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            97LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            92LL) )
    {
      v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
              a4,
              94LL);
      if ( !v24
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
              a4,
              100LL)
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
              a4,
              114LL)
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
              a4,
              115LL)
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
              a4,
              101LL) )
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
  v7 = 2048;
LABEL_16:
  v12 = *v6;
  if ( *v6 != a4 )
  {
    if ( v12 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
      *v6 = 0LL;
    }
    if ( a4 )
    {
      *v6 = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= v7;
    *a5 = 1;
  }
  return (unsigned int)v5;
}
