/*
 * XREFs of ??1CPropertyBagBase@@MEAA@XZ @ 0x18008CA08
 * Callers:
 *     ??1CPropertyBag@@MEAA@XZ @ 0x18008DA40 (--1CPropertyBag@@MEAA@XZ.c)
 *     ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x18014E980 (--_ECPropertyBagBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CPropertyBagBase::~CPropertyBagBase(CPropertyBagBase *this, __int64 a2, const GUID *a3, const GUID *a4)
{
  int v4; // edx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v4 = *((_DWORD *)this + 28);
  *(_QWORD *)this = &CPropertyBagBase::`vftable';
  if ( v4
    && (unsigned int)pRelatedActivityId > 5
    && (qword_1801EAA90 & 1) != 0
    && (qword_1801EAA98 & 1) == qword_1801EAA98 )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v4;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4A49, a3, a4, 3u, &pData);
  }
  CResource::~CResource(this);
}
