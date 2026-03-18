/*
 * XREFs of ?GdiSpriteBitmapNotifyDirty@CChannel@@UEAAJIW4Enum@DwmSpriteDirtyFlags@@_K@Z @ 0x18001DF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapNotifyDirty(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  _DWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+2Ch] [rbp-1Ch]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1 + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v10[0] = 168;
  v10[1] = a2;
  v10[2] = a3;
  v11 = a4;
  v8 = CChannel::SendCommand((CChannel *)a1, v10, 0x14u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v8;
}
