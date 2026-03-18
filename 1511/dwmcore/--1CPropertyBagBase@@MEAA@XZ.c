/*
 * XREFs of ??1CPropertyBagBase@@MEAA@XZ @ 0x18012DFDC
 * Callers:
 *     ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x18012E090 (--_ECPropertyBagBase@@MEAAPEAXI@Z.c)
 *     ??1CPropertyBag@@MEAA@XZ @ 0x180135C60 (--1CPropertyBag@@MEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ??1CResource@@MEAA@XZ @ 0x180085834 (--1CResource@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CPropertyBagBase::~CPropertyBagBase(CPropertyBagBase *this, __int64 a2, const GUID *a3, const GUID *a4)
{
  int v4; // edx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v4 = *((_DWORD *)this + 10);
  *(_QWORD *)this = &CPropertyBagBase::`vftable';
  if ( v4
    && (unsigned int)pRelatedActivityId > 5
    && (qword_18019E950 & 1) != 0
    && (qword_18019E958 & 1) == qword_18019E958 )
  {
    v6 = v4;
    v8 = &v6;
    v10 = 0;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DDAC, a3, a4, 3u, &v7);
  }
  CResource::~CResource(this);
}
