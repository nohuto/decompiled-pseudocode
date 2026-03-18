/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x140004E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x1400014E0 (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140002D38 (--3@YAXPEAX@Z.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
