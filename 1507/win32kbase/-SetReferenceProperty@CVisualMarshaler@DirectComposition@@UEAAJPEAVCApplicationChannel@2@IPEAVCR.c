/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002A910
 * Callers:
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00032E0 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PEA_N@Z @ 0x1C0029700 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@PE.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
      v7 = 512;
      goto LABEL_4;
    case 4:
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
             a4,
             31LL) )
      {
        v5 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a5);
        goto LABEL_4;
      }
      return (unsigned int)-1073741811;
    case 5:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                7LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v5 = v17;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
      v7 = 2048;
      goto LABEL_4;
    case 6:
      if ( a4 )
      {
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                61LL);
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v5 = v19;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
      v7 = 0x2000;
LABEL_4:
      if ( v5 < 0 || a3 == 4 )
        return (unsigned int)v5;
      goto LABEL_6;
  }
  if ( a3 != 10 )
  {
    if ( a3 == 19 )
    {
      if ( a4 )
      {
        v20 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
                a4,
                88LL);
        v21 = 0;
        if ( !v20 )
          v21 = -1073741811;
        v5 = v21;
      }
      v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 176);
      v7 = 0x200000;
      goto LABEL_4;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          84LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          100LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          79LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          81LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          86LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          97LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          87LL) )
  {
    return (unsigned int)-1073741811;
  }
  v6 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 128);
  v7 = 4096;
LABEL_6:
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
