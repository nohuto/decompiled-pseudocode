/*
 * XREFs of ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800863B8
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180035A50 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180004284 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180087B34 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18008946C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1800894B8 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     WPP_SF_dP @ 0x180089C0C (WPP_SF_dP.c)
 */

unsigned __int8 *__fastcall CAudioSessionStore::FlattenProperty(
        CAudioSessionStore *this,
        const struct tagPROPVARIANT *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // r12
  SIZE_T v6; // r15
  unsigned __int16 *v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 ulVal; // r15
  char *v10; // rax
  _QWORD *v11; // rsi
  char *v12; // rdi
  __int64 v13; // rcx
  int v15; // eax
  LONG plUbound; // [rsp+70h] [rbp+40h] BYREF
  int v17; // [rsp+74h] [rbp+44h]
  unsigned __int64 *v18; // [rsp+80h] [rbp+50h]
  unsigned __int64 rgIndices; // [rsp+88h] [rbp+58h] BYREF

  v18 = a3;
  v17 = HIDWORD(this);
  v3 = 0LL;
  v4 = a3;
  plUbound = 0;
  *a3 = 0LL;
  v6 = 24LL;
  if ( !CAudioSessionStore::IsValidProperty(this, a2) )
    return (unsigned __int8 *)v3;
  v8 = *v7;
  switch ( (_DWORD)v8 )
  {
    case 8:
      goto LABEL_21;
    case 0x1E:
      if ( (int)StringCbLengthA(a2->pszVal, v8, &rgIndices) < 0 || rgIndices > 0x400 )
        return (unsigned __int8 *)v3;
      v6 = rgIndices + 25;
      break;
    case 0x1F:
LABEL_21:
      if ( (int)StringCbLengthW(a2->bstrVal, 0x7FFFFFFFuLL, &rgIndices) < 0 || rgIndices > 0x400 )
        return (unsigned __int8 *)v3;
      v6 = rgIndices + 26;
      break;
    case 0x41:
    case 0x46:
      ulVal = a2->ulVal;
      if ( ulVal > 0x400 )
        return (unsigned __int8 *)v3;
      v6 = ulVal + 24;
      break;
    case 0x2004:
      if ( SafeArrayGetUBound(a2->parray, 1u, &plUbound) < 0 || (unsigned __int64)plUbound > 0x100 || plUbound < 0 )
        return (unsigned __int8 *)v3;
      v6 = 4LL * ++plUbound + 24;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_dP(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 91LL);
      }
      break;
  }
  v10 = (char *)operator new(v6);
  v11 = v10;
  if ( !v10 )
    return (unsigned __int8 *)v3;
  v12 = v10 + 24;
  *(_OWORD *)v10 = *(_OWORD *)&a2->vt;
  *((_QWORD *)v10 + 2) = a2->bstrblobVal.pData;
  if ( a2->vt != 8 )
  {
    if ( a2->vt == 30 )
    {
      v15 = StringCchCopyA(v12, v6 - 24, a2->pszVal);
      goto LABEL_52;
    }
    if ( a2->vt != 31 )
    {
      if ( a2->vt == 65 || a2->vt == 70 )
      {
        memcpy_0(v12, a2->bstrblobVal.pData, a2->ulVal);
        v11[2] = 24LL;
      }
      else if ( a2->vt == 8196 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_dP(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 92LL);
        }
        v11[1] = 24LL;
        LODWORD(rgIndices) = 0;
        if ( plUbound > 0 )
        {
          while ( 1 )
          {
            if ( !SafeArrayGetElement(a2->parray, (LONG *)&rgIndices, v12) )
              goto LABEL_40;
            v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
              break;
LABEL_45:
            v12 += 4;
            LODWORD(rgIndices) = rgIndices + 1;
            if ( (int)rgIndices >= plUbound )
            {
              v4 = v18;
              goto LABEL_47;
            }
          }
          if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x5Du,
              (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              rgIndices);
LABEL_40:
            v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          if ( (struct _GUID *)v13 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(v13 + 28) & 8) != 0
            && *(_BYTE *)(v13 + 25) >= 4u )
          {
            WPP_SF_dg(
              *(_QWORD *)(v13 + 16),
              0x5Eu,
              (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              rgIndices);
          }
          goto LABEL_45;
        }
      }
      goto LABEL_47;
    }
  }
  v15 = StringCbCopyW(v12, v6 - 24, a2->pszVal);
LABEL_52:
  v11[1] = 24LL;
  if ( !v15 )
  {
LABEL_47:
    *v4 = v6;
    return (unsigned __int8 *)v11;
  }
  operator delete(v11);
  return 0LL;
}
