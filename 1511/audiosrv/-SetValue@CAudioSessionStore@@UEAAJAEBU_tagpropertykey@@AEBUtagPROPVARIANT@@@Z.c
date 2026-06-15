/*
 * XREFs of ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180086100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180083E58 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::SetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  __int64 v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  GUID **v9; // rdi
  GUID **v10; // rsi
  GUID *v11; // rcx
  GUID *v12; // rax
  GUID *v13; // rsi
  HRESULT v14; // ebx
  GUID *v15; // rcx
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  if ( !CAudioSessionStore::IsValidProperty(this, a3) )
    return 2147944030LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  v9 = (GUID **)((char *)this + 24);
  v10 = v9;
  v11 = *v9;
  if ( *v9 )
  {
    while ( v11[1].Data1 != a2->pid
         || *(_QWORD *)&v11->Data1 != *(_QWORD *)&a2->fmtid.Data1
         || *(_QWORD *)v11->Data4 != *(_QWORD *)a2->fmtid.Data4 )
    {
      v10 = (GUID **)&v11[3];
      v11 = *(GUID **)&v11[3].Data1;
      if ( !v11 )
        goto LABEL_8;
    }
    pvarDest[0] = 0LL;
    pvarDest[1] = 0LL;
    v17 = 0LL;
    v14 = PropVariantCopy(pvarDest, (const PROPVARIANT *)a3);
    if ( !v14 )
    {
      PropVariantClear((PROPVARIANT *)(*v10)[1].Data4);
      v15 = *v10;
      *(GUID *)((char *)v15 + 24) = *(GUID *)pvarDest;
      *(_QWORD *)v15[2].Data4 = v17;
    }
  }
  else
  {
LABEL_8:
    v12 = (GUID *)operator new(0x38uLL);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12[1].Data4 = 0LL;
      *(_QWORD *)&v12[2].Data1 = 0LL;
      *(_QWORD *)v12[2].Data4 = 0LL;
      v14 = PropVariantCopy((PROPVARIANT *)v12[1].Data4, (const PROPVARIANT *)a3);
      if ( v14 )
      {
        operator delete(v13);
      }
      else
      {
        while ( *v9 )
          v9 = (GUID **)&(*v9)[3];
        *(_QWORD *)&v13[3].Data1 = 0LL;
        v13[1].Data1 = a2->pid;
        *v13 = a2->fmtid;
        *v9 = v13;
      }
    }
    else
    {
      v14 = -2147024882;
    }
  }
  LeaveCriticalSection(v8);
  if ( v14 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x50u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v14);
  }
  return (unsigned int)v14;
}
