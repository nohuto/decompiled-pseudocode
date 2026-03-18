/*
 * XREFs of ?WindowNodeSetExtendedBounds@CChannel@@UEAAJIAEBUtagRECT@@0@Z @ 0x1800492A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeSetExtendedBounds(
        CChannel *this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+24h] [rbp-34h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+38h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v12 = 90;
  memset_0(&v13, 0, 0x24uLL);
  v8 = (__int128)*a3;
  v9 = (__int128)*a4;
  v13 = a2;
  v14 = v8;
  v15 = v9;
  v10 = CChannel::SendCommand(this, &v12, 0x28u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v10;
}
