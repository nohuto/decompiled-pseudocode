/*
 * XREFs of ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015350
 * Callers:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140009358 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x140025EDC (--1CCrossProcessServerOutputEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140036240 (--_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 47) = &CCrossProcessBaseServerEndpoint::`vftable';
  v2 = (char *)*((_QWORD *)this + 49);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 49) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 50);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 50) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 48);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 15) = 0LL;
  }
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
