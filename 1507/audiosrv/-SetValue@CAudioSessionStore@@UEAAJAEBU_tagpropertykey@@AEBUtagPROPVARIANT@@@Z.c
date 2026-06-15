/*
 * XREFs of ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800892D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180087B34 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::SetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  __int64 v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  GUID **v9; // rsi
  GUID **v10; // rdi
  GUID *v11; // rax
  __int64 v12; // rcx
  GUID *v13; // rax
  GUID *v14; // rdi
  HRESULT v15; // ebx
  GUID *v16; // rcx
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  if ( !CAudioSessionStore::IsValidProperty(this, a3) )
    return 2147944030LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  v9 = (GUID **)((char *)this + 24);
  v10 = v9;
  v11 = *v9;
  if ( *v9 )
  {
    while ( 1 )
    {
      if ( v11[1].Data1 == a2->pid )
      {
        v12 = *(_QWORD *)&v11->Data1 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)&v11->Data1 == *(_QWORD *)&a2->fmtid.Data1 )
          v12 = *(_QWORD *)v11->Data4 - *(_QWORD *)a2->fmtid.Data4;
        if ( !v12 )
          break;
      }
      v10 = (GUID **)&v11[3];
      v11 = *(GUID **)&v11[3].Data1;
      if ( !v11 )
        goto LABEL_9;
    }
    pvarDest[0] = 0LL;
    pvarDest[1] = 0LL;
    v18 = 0LL;
    v15 = PropVariantCopy(pvarDest, (const PROPVARIANT *)a3);
    if ( !v15 )
    {
      PropVariantClear((PROPVARIANT *)(*v10)[1].Data4);
      v16 = *v10;
      *(GUID *)((char *)v16 + 24) = *(GUID *)pvarDest;
      *(_QWORD *)v16[2].Data4 = v18;
    }
  }
  else
  {
LABEL_9:
    v13 = (GUID *)operator new(0x38uLL);
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)v13[1].Data4 = 0LL;
      *(_QWORD *)&v13[2].Data1 = 0LL;
      *(_QWORD *)v13[2].Data4 = 0LL;
      v15 = PropVariantCopy((PROPVARIANT *)v13[1].Data4, (const PROPVARIANT *)a3);
      if ( v15 )
      {
        operator delete(v14);
      }
      else
      {
        while ( *v9 )
          v9 = (GUID **)&(*v9)[3];
        *(_QWORD *)&v14[3].Data1 = 0LL;
        v14[1].Data1 = a2->pid;
        *v14 = a2->fmtid;
        *v9 = v14;
      }
    }
    else
    {
      v15 = -2147024882;
    }
  }
  LeaveCriticalSection(v8);
  if ( v15 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x51u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
