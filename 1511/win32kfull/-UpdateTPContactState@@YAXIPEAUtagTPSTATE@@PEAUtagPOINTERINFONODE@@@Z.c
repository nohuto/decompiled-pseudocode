/*
 * XREFs of ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01F31A4
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1480 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F15C4 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateTPContactState(unsigned int a1, struct tagTPSTATE *a2, struct tagPOINTERINFONODE *a3)
{
  int v3; // eax
  char *v4; // r9
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = *((_DWORD *)a3 + 17);
  v4 = (char *)a2 + 216 * a1;
  if ( v3 )
  {
    if ( (v3 & 0x40000) != 0 )
    {
      if ( (*((_DWORD *)v4 + 53) & 0x200) != 0 )
        *((_DWORD *)a2 + 386) &= ~0x20000u;
      if ( *((_DWORD *)a2 + 330) == 2 && a1 == *((_DWORD *)a2 + 324) )
        *((_DWORD *)a2 + 386) &= ~0x8000000u;
      v5 = *((_DWORD *)v4 + 53);
      if ( (v5 & 0x10000) != 0 )
      {
        v6 = v5 & 0xFFFEFFFF;
      }
      else
      {
        v6 = v5 & 0xFFFFFA5E;
        *((_DWORD *)v4 + 20) = 0;
      }
      *((_DWORD *)v4 + 53) = v6;
      v7 = *((_DWORD *)a2 + 330);
      if ( (v7 == 3 || v7 == 6) && a1 == *((_DWORD *)a2 + 325) )
        *((_DWORD *)a2 + 386) &= ~0x400u;
    }
    else
    {
      *((_QWORD *)v4 + 2) = *((_QWORD *)a3 + 11);
      *((_QWORD *)v4 + 6) = *((_QWORD *)a3 + 17);
      v8 = *((_DWORD *)a2 + 330);
      if ( v8 != 3 && v8 != 6 )
        *((_QWORD *)v4 + 1) = *((_QWORD *)a3 + 12);
    }
  }
}
