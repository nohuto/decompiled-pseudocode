/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x180005050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800040E0 (--3@YAXPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180005088 (--1CPortClient@@UEAA@XZ.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
